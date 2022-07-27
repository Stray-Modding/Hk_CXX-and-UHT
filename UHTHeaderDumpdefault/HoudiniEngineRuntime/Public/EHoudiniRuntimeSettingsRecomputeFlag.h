#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.generated.h"

UENUM()
enum EHoudiniRuntimeSettingsRecomputeFlag {
    HRSRF_Always,
    HRSRF_OnlyIfMissing,
    HRSRF_Never,
    HRSRF_MAX UMETA(Hidden),
};

