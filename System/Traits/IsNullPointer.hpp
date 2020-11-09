//
// Created by Stoorx on 10.11.2020.
//

#pragma once

#include "./IsSame.hpp"
#include "./RemoveQualifiers.hpp"

namespace System::Traits {
  template <typename Type>
  static constexpr bool IsNullPointer = IsSame<RemoveQualifiers<Type>, decltype(nullptr)>;
}
