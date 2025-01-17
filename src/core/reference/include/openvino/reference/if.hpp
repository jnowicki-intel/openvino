// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <cmath>

#include "openvino/op/util/multi_subgraph_base.hpp"

namespace ov {
namespace reference {
void if_reference(const std::vector<std::shared_ptr<Model>>& body,
                  const std::vector<op::util::MultiSubGraphOp::MultiSubgraphOutputDescriptionVector>& out_descs,
                  const std::vector<op::util::MultiSubGraphOp::MultiSubgraphInputDescriptionVector>& input_descs,
                  const HostTensorVector& out,
                  const HostTensorVector& args);
}
}  // namespace ov
