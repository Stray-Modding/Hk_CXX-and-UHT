#pragma once
#include "CoreMinimal.h"
#include "EPlaneConstraintAxisSetting.generated.h"

UENUM(BlueprintType)
enum class EPlaneConstraintAxisSetting : uint8 {
    Custom,
    X,
    Y,
    Z,
    UseGlobalPhysicsSetting,
};

