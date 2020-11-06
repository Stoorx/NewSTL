//
// Created by Stoorx on 06.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct RemovePointer {
        using type = Type;
    };
    
    template <typename Type>
    struct RemovePointer<Type*> {
        using type = Type;
    };
    
    template <typename Type>
    struct RemovePointer<const Type*> {
        using type = Type;
    };
    
    template <typename Type>
    struct RemovePointer<volatile Type*> {
        using type = Type;
    };
    
    template <typename Type>
    struct RemovePointer<const volatile Type*> {
        using type = Type;
    };
  }
  
  template <typename Type>
  using RemovePointer = typename Impl::RemovePointer<Type>::type;
}
