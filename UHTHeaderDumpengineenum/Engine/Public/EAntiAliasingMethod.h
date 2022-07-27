#pragma once
#include "CoreMinimal.h"
#include "EAntiAliasingMethod.generated.h"

UENUM(BlueprintType)
enum EAntiAliasingMethod {
    AAM_None,
    AAM_FXAA,
    AAM_TemporalAA,
    AAM_MSAA,
    AAM_MAX UMETA(Hidden),
};

