#ifndef UE4SS_SDK_ScreenLoggerRuntime_HPP
#define UE4SS_SDK_ScreenLoggerRuntime_HPP

#include "ScreenLoggerRuntime_enums.hpp"

class UScreenLoggerSettings : public UObject
{
    TEnumAsByte<EScreenLoggerVerbosity> PrintToScreenVerbosity;                       // 0x0028 (size: 0x1)
    float PrintToScreenDuration;                                                      // 0x002C (size: 0x4)
    TEnumAsByte<EScreenLoggerVerbosity> PrintToConsoleVerbosity;                      // 0x0030 (size: 0x1)

}; // Size: 0x38

#endif
