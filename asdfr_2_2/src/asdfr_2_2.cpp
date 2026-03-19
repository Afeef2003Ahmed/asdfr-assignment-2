//===============================================================================
// Authors : Afeef Ahmed, Vaishnav
// Group : 6
// License : LGPL open source license
//
// Brief : 1ms periodic real-time timing test using Xenomai / EVL
//===============================================================================

#include <iostream>
#include <vector>
#include <cmath>
#include <evl/thread.h>
#include <evl/clock.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include "asdfr_2_2.hpp"



std::vector<double> jitter_samples;
bool do_work = false; // This flag is to enable/disable extra workload

void run_periodic_loop()
{
    struct timespec next_time, current_time;

    clock_gettime(CLOCK_MONOTONIC, &next_time);

    for(int i = 0; i < NUM_SAMPLES; i++)  // The following few lines of code is to handle nanosecond overflow
    {
        next_time.tv_nsec += PERIOD_NS;

        if(next_time.tv_nsec >= 1000000000)
        {
            next_time.tv_sec++;
            next_time.tv_nsec -= 1000000000;
        }

        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next_time, NULL);

        clock_gettime(CLOCK_MONOTONIC, &current_time);

        long expected = next_time.tv_sec * 1e9 + next_time.tv_nsec;
        long actual   = current_time.tv_sec * 1e9 + current_time.tv_nsec;

        double jitter_us = (actual - expected) / 1000.0; // Jitter calculation

        jitter_samples.push_back(jitter_us);

        if(do_work) // With Workload
        {
            double x = 0;
            for(int k = 0; k < 3000; k++)
                x += sin(k) * cos(k);

            volatile double y = x;
        }
    }
}

void print_stats()
{
    double min = jitter_samples[0];
    double max = jitter_samples[0];
    double sum = 0;

    for(double j : jitter_samples)
    {
        if(j < min) min = j;
        if(j > max) max = j;
        sum += j;
    }

    double mean = sum / jitter_samples.size();

    double sq = 0;
    for(double j : jitter_samples)
        sq += (j - mean)*(j - mean);

    double stddev = sqrt(sq / jitter_samples.size());

    std::cout << "\n=== Timing Results ===\n";
    std::cout << "Samples: " << jitter_samples.size() << std::endl;
    std::cout << "Min jitter: " << min << " us\n";
    std::cout << "Max jitter: " << max << " us\n";
    std::cout << "Mean jitter: " << mean << " us\n";
    std::cout << "Std dev: " << stddev << " us\n";
}

void save_data(const char* filename)
{
    std::ofstream file(filename);

    for(size_t i = 0; i < jitter_samples.size(); i++)
    {
        file << i << "," << jitter_samples[i] << std::endl;
    }

    file.close();
    std::cout << "Saved to " << filename << std::endl;
}

int main()
{
    std::cout << "Xenomai / EVL Real-Time Timing Test\n";

    // Attaching thread to EVL core
    evl_attach_self("rt_thread");

    // Real-time scheduling policy
    struct sched_param param;
    param.sched_priority = 80;

    pthread_setschedparam(
        pthread_self(),
        SCHED_FIFO,
        &param
    );

    // Pinning thread to EVL core 
    cpu_set_t cpuset;
    CPU_ZERO(&cpuset);
    CPU_SET(1, &cpuset);
    pthread_setaffinity_np(
        pthread_self(),
        sizeof(cpu_set_t),
        &cpuset
    );

    std::cout << "\nTest 1: No computational work\n";
    do_work = false;
    run_periodic_loop();
    print_stats();

    jitter_samples.clear();

    std::cout << "\nTest 2: With computational work\n";
    do_work = true;
    run_periodic_loop();
    print_stats();

    return 0;
}