#ifndef AUTOWARE_NODE__AUTOWARE_NODE_HPP_
#define AUTOWARE_NODE__AUTOWARE_NODE_HPP_

#include "autoware_node/visibility_control.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"

namespace autoware_node
{

class AutowareNode : public rclcpp_lifecycle::LifecycleNode
{
public:
  AUTOWARE_NODE_PUBLIC
  AutowareNode(
    const std::string & nodeName, const rclcpp::NodeOptions & options,
    bool enable_communication_interface = true);

  AUTOWARE_NODE_PUBLIC
  AutowareNode(
    const std::string & node_name, const std::string & namespace_,
    const rclcpp::NodeOptions & options = rclcpp::NodeOptions(),
    bool enable_communication_interface = true);
};

}  // namespace autoware_node

#endif  // AUTOWARE_NODE__AUTOWARE_NODE_HPP_
