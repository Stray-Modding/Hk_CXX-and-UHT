#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeDurationType.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeDurationType : uint8 {
    Fixed,
    Infinite,
    Custom,
};

