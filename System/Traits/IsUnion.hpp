//
// Created by Stoorx on 10.11.2020.
//

#pragma once

namespace System::Traits {
  template <typename Type>
  static constexpr bool IsUnion = __is_union(Type);
}
