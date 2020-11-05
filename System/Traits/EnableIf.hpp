//
// Created by Stoorx on 04.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <bool Condition, typename Type = void>
    struct EnableIf {};
    
    template <typename Type>
    struct EnableIf<true, Type> {
        using type = Type;
    };
  }
  
  template <bool Condition, typename Type = void>
  using EnableIf = typename Impl::EnableIf<Condition, Type>::type;
}
