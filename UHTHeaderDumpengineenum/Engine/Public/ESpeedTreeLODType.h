#pragma once
#include "CoreMinimal.h"
#include "ESpeedTreeLODType.generated.h"

UENUM(BlueprintType)
enum ESpeedTreeLODType {
    STLOD_Pop,
    STLOD_Smooth,
    STLOD_MAX UMETA(Hidden),
};

