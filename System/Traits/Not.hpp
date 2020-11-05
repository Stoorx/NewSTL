//
// Created by Stoorx on 05.11.2020.
//

#pragma once

namespace System::Traits {
  template <bool Value>
  static constexpr bool Not = !Value;
}
