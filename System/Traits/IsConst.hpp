//
// Created by Stoorx on 04.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct IsConst {
        static constexpr bool value = false;
    };
    
    template <typename Type>
    struct IsConst<const Type> {
        static constexpr bool value = true;
    };
  }
  
  template <typename Type>
  static constexpr bool IsConst = Impl::IsConst<Type>::value;
}
