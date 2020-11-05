//
// Created by Stoorx on 05.11.2020.
//

#pragma once

#include "RemoveConst.hpp"
#include "RemoveVolatile.hpp"

namespace System::Traits {
  template <typename Type>
  using RemoveQualifiers = RemoveConst<
      RemoveVolatile<Type>
  >;
}
