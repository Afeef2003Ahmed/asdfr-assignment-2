
# ─────────────────────────────────────────────────
# Assignment 2.3
# ─────────────────────────────────────────────────

``` bash
# Build the workspace
cd ~/asdfr_2_3_ws
colcon build
source install/setup.bash


Terminal 1 (ROS2 Node – Loop Node):

# Start the loopback node that immediately returns received messages
source ~/asdfr_2_3_ws/install/setup.bash
ros2 run timing_nodes loop_node


Terminal 2 (ROS2 Node – Sequence Node):

# Start the sequence node that sends timestamped messages
# and measures the round-trip time (RTT)
source ~/asdfr_2_3_ws/install/setup.bash
ros2 run timing_nodes seq_node



Terminal 4 (Generate CPU Load for Timing Experiment):

# Create artificial CPU load to observe effect on RTT and jitter

stress --cpu 4

Results:

# After running seq_node, timing results are stored in:
timing_data.csv

```
