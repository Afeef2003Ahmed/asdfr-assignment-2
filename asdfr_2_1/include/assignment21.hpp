//===============================================================================
// File    : assignment21.hpp
// Authors : Afeef Ahmed, Vaishnav
// Brief   : Header file for 1ms periodic POSIX thread timing test
//===============================================================================

#ifndef ASSIGNMENT21_HPP
#define ASSIGNMENT21_HPP

#include <vector>
#include <pthread.h>

//-----------------------------------------------------------------------------
// Global Variables (extern declarations)
//-----------------------------------------------------------------------------

// Thread handle
extern pthread_t thread;

// Flag to control execution of periodic loop
extern bool running;

// Stores jitter samples (in microseconds)
extern std::vector<double> jitter_samples;

// Flag to enable/disable computational workload
extern bool do_work;

//-----------------------------------------------------------------------------
// Function Declarations
//-----------------------------------------------------------------------------

void* periodic_thread(void* arg);

bool start_thread();

void stop_thread();

void print_stats();

void save_data(const char* filename);

#endif 