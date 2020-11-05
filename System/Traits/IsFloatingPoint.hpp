//
// Created by Stoorx on 05.11.2020.
//

#pragma once

#include "./IsSame.hpp"
#include "./RemoveConst.hpp"
#include "./RemoveVolatile.hpp"
#include "./AnyOf.hpp"

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    static constexpr bool IsFloatingPoint = Traits::AnyOf<
        Traits::IsSame<Type, float>,
        Traits::IsSame<Type, double>,
        Traits::IsSame<Type, long double>
    >;
  }
  
  template <typename Type>
  static constexpr bool IsFloatingPoint = Impl::IsFloatingPoint<
      RemoveConst<
          RemoveVolatile<Type>
      >
  >;
}
