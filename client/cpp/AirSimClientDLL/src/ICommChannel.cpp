// Copyright (C) Microsoft Corporation.  
// Copyright (C) 2025 IAMAI Consulting Corp.
//
// MIT License. All rights reserved.

#include "ICommChannel.h"

#include <limits>

#include "pch.h"

namespace microsoft {
namespace projectairsim {
namespace client {
namespace internal {

#ifdef max
#undef max
#endif  // max

const unsigned long ICommChannel::kMSTimeoutInfinite =
    std::numeric_limits<unsigned long>::max();

}  // namespace internal
}  // namespace client
}  // namespace projectairsim
}  // namespace microsoft
