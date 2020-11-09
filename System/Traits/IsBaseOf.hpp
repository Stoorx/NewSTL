//
// Created by Stoorx on 10.11.2020.
//

#pragma once

namespace System::Traits {
  template <typename BaseType, typename DerivedType>
  static constexpr bool IsBaseOf = __is_base_of(BaseType, DerivedType);
}
