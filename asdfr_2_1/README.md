# ─────────────────────────────────────────────────
# Assignment 2.1
# ─────────────────────────────────────────────────

``` bash

Terminal

# compile

g++ assignment21.cpp -o timer_test -lpthread -lm

# To Run

sudo ./timing_test

# For extra CPU Load:

stress --cpu 3

# For CPU Affinity

taskset -c 15 ./timer_test

