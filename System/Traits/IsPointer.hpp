//
// Created by Stoorx on 05.11.2020.
//

#pragma once

#include "./RemoveQualifiers.hpp"

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct IsPointer {
        static constexpr bool value = false;
    };
    
    template <typename Type>
    struct IsPointer<Type*> {
        static constexpr bool value = true;
    };
  }
  
  template <typename Type>
  static constexpr bool IsPointer = Impl::IsPointer<
      RemoveQualifiers<Type>
  >::value;
}
