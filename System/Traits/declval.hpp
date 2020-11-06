//
// Created by Stoorx on 06.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct DecltypeProtector {
        static constexpr bool value = false;
    };
    
    template <typename Type>
    Type&& declval();
  }
  
  template <typename Type>
  auto declval() noexcept -> decltype(Impl::declval<Type>()) {
      static_assert(Impl::DecltypeProtector<Type>::value, "declval() must not be used in evaluated context!");
      return Impl::declval<Type>();
  }
}
