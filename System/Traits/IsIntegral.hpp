//
// Created by Stoorx on 04.11.2020.
//

#pragma once

#include "./IsSame.hpp"
#include "./RemoveConst.hpp"
#include "./RemoveVolatile.hpp"
#include "./AnyOf.hpp"

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    static constexpr bool IsIntegral = Traits::AnyOf<
        Traits::IsSame<Type, bool>,
        Traits::IsSame<Type, char>,
        Traits::IsSame<Type, unsigned char>,
        Traits::IsSame<Type, signed char>,
        Traits::IsSame<Type, wchar_t>,
        Traits::IsSame<Type, char16_t>,
        Traits::IsSame<Type, char32_t>,
        Traits::IsSame<Type, unsigned short>,
        Traits::IsSame<Type, short>,
        Traits::IsSame<Type, unsigned int>,
        Traits::IsSame<Type, int>,
        Traits::IsSame<Type, unsigned long>,
        Traits::IsSame<Type, long>,
        Traits::IsSame<Type, unsigned long long>,
        Traits::IsSame<Type, long long>
    >;
  }
  
  template <typename Type>
  static constexpr bool IsIntegral = Impl::IsIntegral<
      RemoveConst<
          RemoveVolatile<Type>
      >
  >;
}
