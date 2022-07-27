#pragma once
#include "CoreMinimal.h"
#include "EInertializationState.generated.h"

UENUM(BlueprintType)
enum class EInertializationState : uint8 {
    Inactive,
    Pending,
    Active,
};

