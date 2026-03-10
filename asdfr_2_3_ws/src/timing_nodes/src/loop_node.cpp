#include "rclcpp/rclcpp.hpp"
#include "timing_nodes/msg/timing.hpp"

class LoopNode : public rclcpp::Node
{
public:
    LoopNode():Node("loop_node")
    {
        pub_ = create_publisher<timing_nodes::msg::Timing>("loop_to_seq",10);

        sub_ = create_subscription<timing_nodes::msg::Timing>(
            "seq_to_loop",10,
            std::bind(&LoopNode::callback,this,std::placeholders::_1));
    }

private:

    void callback(const timing_nodes::msg::Timing::SharedPtr msg)
    {
        pub_->publish(*msg);
    }

    rclcpp::Publisher<timing_nodes::msg::Timing>::SharedPtr pub_;
    rclcpp::Subscription<timing_nodes::msg::Timing>::SharedPtr sub_;
};

int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<LoopNode>());
    rclcpp::shutdown();
}