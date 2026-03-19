#include "loop_node.hpp"


LoopNode::LoopNode():Node("loop_node")
    {
        pub_ = create_publisher<timing_nodes::msg::Timing>("loop_to_seq",10);

        sub_ = create_subscription<timing_nodes::msg::Timing>(
            "seq_to_loop",10,
            std::bind(&LoopNode::callback,this,std::placeholders::_1));
    }



void LoopNode::callback(const timing_nodes::msg::Timing::SharedPtr msg)
    {
        pub_->publish(*msg); // We immediately republish the received message
    // This creates a loop-back mechanism for latency measurement
    }


int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<LoopNode>());
    rclcpp::shutdown();
}