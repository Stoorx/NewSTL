//
// Created by Stoorx on 10.11.2020.
//

#pragma once

#include <System/Traits/EnableIf.hpp>
#include <System/Traits/IsArithmetic.hpp>
#include "./Types.hpp"

namespace System {
  using namespace System::Traits;
  
  template <typename Type, typename = EnableIf<IsArithmetic<Type>>>
  struct Box {};
  
  template <>
  struct Box<Bool> {
      static constexpr Byte Min = false;
      static constexpr Byte Max = true;
      
      static constexpr Byte Zero = false;
      static constexpr Byte One  = true;
  };
  
  template <>
  struct Box<Byte> {
      static constexpr Byte Min = (Byte)0x0;
      static constexpr Byte Max = (Byte)0xFF;
      
      static constexpr Byte Zero = (Byte)0x00;
      static constexpr Byte One  = (Byte)0x01;
  };
  
  template <>
  struct Box<SByte> {
      static constexpr SByte Min = (SByte)0x80;
      static constexpr SByte Max = (SByte)0x7F;
      
      static constexpr SByte Zero = (SByte)0x00;
      static constexpr SByte One  = (SByte)0x01;
  };
  
  template <>
  struct Box<Char> {
      static constexpr Char Min = (Char)0x0;
      static constexpr Char Max = (Char)0xFFFF;
      
      static constexpr Char Zero = (Byte)0x00;
      static constexpr Char One  = (Byte)0x01;
  };
  
  template <>
  struct Box<Short> {
      static constexpr Short Min = (Short)0x8000;
      static constexpr Short Max = (Short)0x7FFF;
      
      static constexpr Short Zero = (Short)0x0000;
      static constexpr Short One  = (Short)0x0001;
  };
  
  template <>
  struct Box<UShort> {
      static constexpr UShort Min = (UShort)0x0000;
      static constexpr UShort Max = (UShort)0xFFFF;
      
      static constexpr UShort Zero = (UShort)0x0000;
      static constexpr UShort One  = (UShort)0x0001;
  };
  
  template <>
  struct Box<Int> {
      static constexpr Int Min = (Int)0x8000'0000;
      static constexpr Int Max = (Int)0x7FFF'FFFF;
      
      static constexpr Int Zero = (Int)0x0000'0000;
      static constexpr Int One  = (Int)0x0000'0001;
  };
  
  template <>
  struct Box<UInt> {
      static constexpr UInt Min = (UInt)0x0000'0000;
      static constexpr UInt Max = (UInt)0xFFFF'FFFF;
      
      static constexpr UInt Zero = (UInt)0x0000'0000;
      static constexpr UInt One  = (UInt)0x0000'0001;
  };
  
  template <>
  struct Box<Long> {
      static constexpr Long Min = (Long)0x8000'0000'0000'0000LL;
      static constexpr Long Max = (Long)0x7FFF'FFFF'FFFF'FFFFLL;
      
      static constexpr Long Zero = (Long)0x0000'0000'0000'0000LL;
      static constexpr Long One  = (Long)0x0000'0000'0000'0001LL;
  };
  
  template <>
  struct Box<ULong> {
      static constexpr ULong Min = (ULong)0x0000'0000'0000'0000ULL;
      static constexpr ULong Max = (ULong)0xFFFF'FFFF'FFFF'FFFFULL;
      
      static constexpr ULong Zero = (ULong)0x0000'0000'0000'0000ULL;
      static constexpr ULong One  = (ULong)0x0000'0000'0000'0001ULL;
  };
  
  template <>
  struct Box<Float> {
      static constexpr Float Min  = __FLT_MIN__;
      static constexpr Float Max  = __FLT_MAX__;
      //TODO: add floating features: denormals, epsilon, exponent...
      static constexpr Float Zero = (Float)0.0f;
      static constexpr Float One  = (Float)1.0f;
  };
  
  template <>
  struct Box<Double> {
      static constexpr Float Min  = __DBL_MIN__;
      static constexpr Float Max  = __DBL_MAX__;
      //TODO: add floating features: denormals, epsilon, exponent...
      static constexpr Float Zero = (Double)0.0;
      static constexpr Float One  = (Double)1.0;
  };
}
