#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapGestureTransformSpace.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapGestureTransformSpace : uint8 {
    World,
    Hand,
    Tracking,
};

