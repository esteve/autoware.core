// Copyright 2022 The Autoware Contributors
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

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
    const std::string & node_name, const std::string & ns = "",
    const rclcpp::NodeOptions & options = rclcpp::NodeOptions());

};

}  // namespace autoware_node

#endif  // AUTOWARE_NODE__AUTOWARE_NODE_HPP_
