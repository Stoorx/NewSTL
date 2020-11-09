//
// Created by Stoorx on 10.11.2020.
//

#pragma once

namespace System::Traits {
  template <typename Type>
  static constexpr bool IsEnum = __is_enum(Type);
}
