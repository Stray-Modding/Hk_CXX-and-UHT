#pragma once
#include "CoreMinimal.h"
#include "EInertializationBoneState.generated.h"

UENUM(BlueprintType)
enum class EInertializationBoneState : uint8 {
    Invalid,
    Valid,
    Excluded,
};

