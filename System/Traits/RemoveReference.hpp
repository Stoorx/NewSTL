//
// Created by Stoorx on 05.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct RemoveReference {
        using type = Type;
    };
    
    template <typename Type>
    struct RemoveReference<Type&> {
        using type = Type;
    };
    
    template <typename Type>
    struct RemoveReference<Type&&> {
        using type = Type;
    };
  }
  
  template <typename Type>
  using RemoveReference = typename Impl::RemoveReference<Type>::type;
}
