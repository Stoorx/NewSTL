//
// Created by Stoorx on 04.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type1, typename Type2>
    struct IsSame {
        static constexpr bool value = false;
    };
    
    template <typename Type>
    struct IsSame<Type, Type> {
        static constexpr bool value = true;
    };
  }
  
  template <typename Type1, typename Type2>
  static constexpr bool IsSame = Impl::IsSame<Type1, Type2>::value;
}
