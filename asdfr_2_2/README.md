# ─────────────────────────────────────────────────
# Assignment 2.2
# ─────────────────────────────────────────────────

``` bash

Terminal

# Compile

g++ asdfr_2_2.cpp -o timing_rt -I/usr/evl/include -L/usr/evl/lib -levl -lpthread -lm

# Run

sudo ./timing_rt

# For extra CPU Load:

stress --cpu 3