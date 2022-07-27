#pragma once
#include "CoreMinimal.h"
#include "EEmitterDynamicParameterValue.generated.h"

UENUM(BlueprintType)
enum EEmitterDynamicParameterValue {
    EDPV_UserSet,
    EDPV_AutoSet,
    EDPV_VelocityX,
    EDPV_VelocityY,
    EDPV_VelocityZ,
    EDPV_VelocityMag,
    EDPV_MAX UMETA(Hidden),
};

