#include "autoware_node/autoware_node.hpp"

namespace autoware_node
{

AutowareNode::AutowareNode(
  const std::string & nodeName, const rclcpp::NodeOptions & options,
  bool enableCommunicationInterface)
: LifecycleNode(nodeName, options, enableCommunicationInterface)
{
}

AutowareNode::AutowareNode(
  const std::string & node_name, const std::string & namespace_,
  const rclcpp::NodeOptions & options, bool enable_communication_interface)
: LifecycleNode(node_name, namespace_, options, enable_communication_interface)
{
}

}  // namespace autoware_node
