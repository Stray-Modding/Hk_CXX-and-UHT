#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapGestureTransformSpace.generated.h"

UENUM()
enum class EMagicLeapGestureTransformSpace : uint8 {
    World,
    Hand,
    Tracking,
};

