//
// Created by Stoorx on 09.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct IsRvalueReference {
        static constexpr bool value = false;
    };
    
    template <typename Type>
    struct IsRvalueReference<Type&&> {
        static constexpr bool value = true;
    };
  }
  
  template <typename Type>
  static constexpr bool IsRvalueReference = Impl::IsRvalueReference<Type>::value;
}
