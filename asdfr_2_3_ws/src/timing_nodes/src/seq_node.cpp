#include "seq_node.hpp"
#include <cmath>
#include <chrono>

using namespace std::chrono_literals;


SeqNode::SeqNode() : Node("seq_node"), counter_(0), prev_rtt_(0)
    {
        pub_ = create_publisher<timing_nodes::msg::Timing>("seq_to_loop",10);

        sub_ = create_subscription<timing_nodes::msg::Timing>(
            "loop_to_seq",10,
            std::bind(&SeqNode::callback,this,std::placeholders::_1));

        timer_ = create_wall_timer(1ms,
            std::bind(&SeqNode::timer_callback,this));

        file_.open("timing_data.csv");
        file_ << "id,rtt_ms,jitter_ms\n";
    }



    void SeqNode::timer_callback()
    {
        timing_nodes::msg::Timing msg;

        msg.id = counter_;
        msg.timestamp = this->now();

        pub_->publish(msg);
        if(counter_ >= 10000)
    {
        file_.close();
        rclcpp::shutdown();
    }

        counter_++;
    }

    void SeqNode::callback(const timing_nodes::msg::Timing::SharedPtr msg)
    {
        auto now = this->now();

        double rtt =
        (now - msg->timestamp).seconds()*1000;

        double jitter = fabs(rtt - prev_rtt_);

        prev_rtt_ = rtt;

        file_ << msg->id << "," << rtt << "," << jitter << "\n";

        RCLCPP_INFO(this->get_logger(),
        "ID %ld RTT %.3f ms Jitter %.3f ms",
        msg->id,rtt,jitter);
    }



int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<SeqNode>());
    rclcpp::shutdown();
}