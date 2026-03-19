//===============================================================================
// File    : seq_node.hpp
// Authors : Afeef Ahmed, Vaishnav
// Brief   : Header file for SeqNode (ROS 2 timing analysis node)
//===============================================================================

#ifndef SEQ_NODE_HPP
#define SEQ_NODE_HPP

#include "rclcpp/rclcpp.hpp"
#include "timing_nodes/msg/timing.hpp"
#include <fstream>

class SeqNode : public rclcpp::Node
{
public:

    SeqNode();

private:

    void timer_callback();

    void callback(const timing_nodes::msg::Timing::SharedPtr msg);

    // Publisher: sends messages to LoopNode
    rclcpp::Publisher<timing_nodes::msg::Timing>::SharedPtr pub_;

    // Subscriber: receives looped-back messages
    rclcpp::Subscription<timing_nodes::msg::Timing>::SharedPtr sub_;

    // Timer for periodic execution (1 ms)
    rclcpp::TimerBase::SharedPtr timer_;

    // File stream for logging RTT and jitter
    std::ofstream file_;

    // Message counter (ID)
    long counter_;

    // Previous RTT value (for jitter calculation)
    double prev_rtt_;
};

#endif 