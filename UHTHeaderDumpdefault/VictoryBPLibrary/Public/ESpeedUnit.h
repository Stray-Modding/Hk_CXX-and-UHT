#pragma once
#include "CoreMinimal.h"
#include "ESpeedUnit.generated.h"

UENUM()
enum ESpeedUnit {
    CentimeterPerSecond,
    FootPerSecond,
    MeterPerSecond,
    MeterPerMinute,
    KilometerPerSecond,
    KilometerPerMinute,
    KilometerPerHour,
    MilePerHour,
    Knot,
    Mach,
    SpeedOfLight,
    YardPerSecond,
};

