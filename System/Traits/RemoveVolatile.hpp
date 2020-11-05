//
// Created by Stoorx on 04.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct RemoveVolatile {
        using type = Type;
    };
    
    template <typename Type>
    struct RemoveVolatile<volatile Type> {
        using type = Type;
    };
  }
  
  template <typename Type>
  using RemoveVolatile = typename Impl::RemoveVolatile<Type>::type;
}
