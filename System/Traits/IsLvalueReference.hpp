//
// Created by Stoorx on 09.11.2020.
//

#pragma once

namespace System::Traits {
  namespace Impl {
    template <typename Type>
    struct IsLvalueReference {
        static constexpr bool value = false;
    };

    template <typename Type>
    struct IsLvalueReference<Type&> {
        static constexpr bool value = true;
    };
  }

  template <typename Type>
  static constexpr bool IsLvalueReference = Impl::IsLvalueReference<Type>::value;
}
