//
// Created by Stoorx on 04.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct RemoveConst {
        using type = Type;
    };
    
    template <typename Type>
    struct RemoveConst<const Type> {
        using type = Type;
    };
  }
  
  template <typename Type>
  using RemoveConst = typename Impl::RemoveConst<Type>::type;
}



