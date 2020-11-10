//
// Created by Stoorx on 10.11.2020.
//

#pragma once

namespace System {
  using SizeType = __SIZE_TYPE__;
  using PtrDiffType = __PTRDIFF_TYPE__;
  using NullPtrType = decltype(nullptr);
  
  using Void = void;
  using Bool = bool;
  
  using Byte = unsigned char;
  using SByte = signed char;
  using Char = char16_t;
  using Short = signed short;
  using UShort = unsigned short;
  using Int = signed int;
  using UInt = unsigned int;
  using Long = signed long long;
  using ULong = unsigned long long;

  using Float = float;
  using Double = double;
}
