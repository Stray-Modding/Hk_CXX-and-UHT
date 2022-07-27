#pragma once
#include "CoreMinimal.h"
#include "EModuleType.generated.h"

UENUM(BlueprintType)
enum EModuleType {
    EPMT_General,
    EPMT_TypeData,
    EPMT_Beam,
    EPMT_Trail,
    EPMT_Spawn,
    EPMT_Required,
    EPMT_Event,
    EPMT_Light,
    EPMT_SubUV,
    EPMT_MAX UMETA(Hidden),
};

