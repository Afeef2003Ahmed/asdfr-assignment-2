//===============================================================================
// File    : asdfr_2_2.hpp
// Authors : Afeef Ahmed, Vaishnav
// Brief   : Header file for 1ms periodic real-time timing test using EVL
//===============================================================================

#ifndef  ASDFR_2_2_HPP
#define ASDFR_2_2_HPP

#include <vector>

//-----------------------------------------------------------------------------
// Constants
//-----------------------------------------------------------------------------

// Period of execution (1 ms in nanoseconds)
constexpr long PERIOD_NS = 1000000;

// Number of samples to collect
constexpr int NUM_SAMPLES = 5000;

//-----------------------------------------------------------------------------
// Global Variables (extern declarations)
//-----------------------------------------------------------------------------

// Stores jitter samples (in microseconds)
extern std::vector<double> jitter_samples;

// Flag to enable/disable computational workload
extern bool do_work;

//-----------------------------------------------------------------------------
// Function Declarations
//-----------------------------------------------------------------------------

void run_periodic_loop();

void print_stats();

#endif 