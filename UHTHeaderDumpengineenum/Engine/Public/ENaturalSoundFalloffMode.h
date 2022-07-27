#pragma once
#include "CoreMinimal.h"
#include "ENaturalSoundFalloffMode.generated.h"

UENUM(BlueprintType)
enum class ENaturalSoundFalloffMode : uint8 {
    Continues,
    Silent,
    Hold,
};

