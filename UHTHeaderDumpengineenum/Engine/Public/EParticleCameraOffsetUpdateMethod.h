#pragma once
#include "CoreMinimal.h"
#include "EParticleCameraOffsetUpdateMethod.generated.h"

UENUM(BlueprintType)
enum EParticleCameraOffsetUpdateMethod {
    EPCOUM_DirectSet,
    EPCOUM_Additive,
    EPCOUM_Scalar,
    EPCOUM_MAX UMETA(Hidden),
};

