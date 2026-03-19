//===============================================================================
// Authors : Afeef Ahmed, Vaishnav
// Group : 6
// License : LGPL open source license
//
// Brief : Simple 1ms periodic thread timing test
//===============================================================================

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <pthread.h>
#include <time.h>
#include <unistd.h>


pthread_t thread;
bool running = false;  // Flag to control execution of the periodic loop
std::vector<double> jitter_samples;  

bool do_work = false; // This flag is to enable/disable extra workload


void* periodic_thread(void* arg) {
    struct timespec next_time, current_time;
    

    clock_gettime(CLOCK_MONOTONIC, &next_time);
    
    while (running) { // The following few lines of code is to handle nanosecond overflow
        
        next_time.tv_nsec += 1000000;  
        
     
        if (next_time.tv_nsec >= 1000000000) {
            next_time.tv_sec += 1;
            next_time.tv_nsec -= 1000000000;
        }
        
        
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next_time, NULL);
      
        clock_gettime(CLOCK_MONOTONIC, &current_time);
        
        
        long expected_ns = next_time.tv_sec * 1e9 + next_time.tv_nsec;
        long actual_ns = current_time.tv_sec * 1e9 + current_time.tv_nsec;
        double jitter_us = (actual_ns - expected_ns) / 1000.0; // Jitter Computation
        
        jitter_samples.push_back(jitter_us);
        
        
        if (do_work) { // With Workload
            
            double x = 0;
            for (int i = 0; i < 10000; i++) {
                x += sin(i) * cos(i);
            }
            volatile double result = x; 
        }
        
        
        if (jitter_samples.size() >= 1000) {
            running = false;
        }
    }
    return NULL;
}


bool start_thread() {
    running = true;
    jitter_samples.clear();
    return (pthread_create(&thread, NULL, periodic_thread, NULL) == 0);
}


void stop_thread() {
    running = false;
    pthread_join(thread, NULL);
}


void print_stats() {
    if (jitter_samples.empty()) return;
    
    double min = jitter_samples[0];
    double max = jitter_samples[0];
    double sum = 0;
    
    for (double j : jitter_samples) {
        if (j < min) min = j;
        if (j > max) max = j;
        sum += j;
    }
    
    double mean = sum / jitter_samples.size();
    
    double sq_sum = 0;
    for (double j : jitter_samples) {
        sq_sum += (j - mean) * (j - mean);
    }
    double stddev = sqrt(sq_sum / jitter_samples.size());
    
    std::cout << "\n=== Timing Results ===" << std::endl;
    std::cout << "Samples: " << jitter_samples.size() << std::endl;
    std::cout << "Min jitter: " << min << " us" << std::endl;
    std::cout << "Max jitter: " << max << " us" << std::endl;
    std::cout << "Mean jitter: " << mean << " us" << std::endl;
    std::cout << "Std deviation: " << stddev << " us" << std::endl;
    std::cout << "====================\n" << std::endl;
}

void save_data(const char* filename) {
    std::ofstream file(filename);
    for (size_t i = 0; i < jitter_samples.size(); i++) {
        file << i << "," << jitter_samples[i] << std::endl;
    }
    file.close();
    std::cout << "Saved to " << filename << std::endl;
}

int main() {
    std::cout << "1ms Periodic Thread Timing Test" << std::endl;
  
    std::cout << "\nTest 1: No extra work in loop" << std::endl;
    do_work = false;
    if (start_thread()) {
        sleep(2); 
        stop_thread();
        print_stats();
        save_data("no_work.csv");
    }
    
  
    std::cout << "\nTest 2: With computational work" << std::endl;
    do_work = true;
    if (start_thread()) {
        sleep(2);
        stop_thread();
        print_stats();
        save_data("with_work.csv");
    }
    
    
    return 0;
}