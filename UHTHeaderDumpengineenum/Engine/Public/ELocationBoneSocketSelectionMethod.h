#pragma once
#include "CoreMinimal.h"
#include "ELocationBoneSocketSelectionMethod.generated.h"

UENUM(BlueprintType)
enum ELocationBoneSocketSelectionMethod {
    BONESOCKETSEL_Sequential,
    BONESOCKETSEL_Random,
    BONESOCKETSEL_MAX UMETA(Hidden),
};

