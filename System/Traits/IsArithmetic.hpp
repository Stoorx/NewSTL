//
// Created by Stoorx on 10.11.2020.
//

#pragma once

#include "./IsIntegral.hpp"
#include "./IsFloatingPoint.hpp"
#include "./AnyOf.hpp"

namespace System::Traits {
  template <typename Type>
  static constexpr bool IsArithmetic = AnyOf<IsIntegral<Type>, IsFloatingPoint<Type>>;
}
