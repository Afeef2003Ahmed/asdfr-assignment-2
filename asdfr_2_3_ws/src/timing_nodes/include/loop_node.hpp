//===============================================================================
// File    : loop_node.hpp
// Authors : Afeef Ahmed, Vaishnav
// Brief   : Header file for LoopNode (ROS 2)
//===============================================================================

#ifndef LOOP_NODE_HPP
#define LOOP_NODE_HPP

#include "rclcpp/rclcpp.hpp"
#include "timing_nodes/msg/timing.hpp"

class LoopNode : public rclcpp::Node
{
public:
  
    LoopNode();

private:
    
    void callback(const timing_nodes::msg::Timing::SharedPtr msg);

    rclcpp::Publisher<timing_nodes::msg::Timing>::SharedPtr pub_;

    rclcpp::Subscription<timing_nodes::msg::Timing>::SharedPtr sub_;
};

#endif 