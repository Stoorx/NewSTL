//
// Created by Stoorx on 10.11.2020.
//

#pragma once

#include "./AnyOf.hpp"
#include "./IsLvalueReference.hpp"
#include "./IsRvalueReference.hpp"

namespace System::Traits {
  template <typename Type>
  static constexpr bool IsReference = AnyOf<IsLvalueReference<Type>, IsRvalueReference<Type>>;
}
