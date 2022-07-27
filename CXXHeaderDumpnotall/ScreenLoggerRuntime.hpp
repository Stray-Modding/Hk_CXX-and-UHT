#ifndef UE4SS_SDK_ScreenLoggerRuntime_HPP
#define UE4SS_SDK_ScreenLoggerRuntime_HPP

#include "ScreenLoggerRuntime_enums.hpp"

class UScreenLoggerSettings : public UObject
{
    TEnumAsByte<EScreenLoggerVerbosity> PrintToScreenVerbosity;
    float PrintToScreenDuration;
    TEnumAsByte<EScreenLoggerVerbosity> PrintToConsoleVerbosity;

};

#endif
