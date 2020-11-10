//
// Created by Stoorx on 10.11.2020.
//

#pragma once

#include "./AnyOf.hpp"
#include "./IsArithmetic.hpp"
#include "./IsNullPointer.hpp"
#include "./IsVoid.hpp"

namespace System::Traits {
  template <typename Type>
  static constexpr bool IsFundamental = AnyOf<IsArithmetic<Type>, IsVoid<Type>, IsNullPointer<Type>>;
}
