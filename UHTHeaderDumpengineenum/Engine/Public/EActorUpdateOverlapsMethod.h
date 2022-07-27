#pragma once
#include "CoreMinimal.h"
#include "EActorUpdateOverlapsMethod.generated.h"

UENUM(BlueprintType)
enum class EActorUpdateOverlapsMethod : uint8 {
    UseConfigDefault,
    AlwaysUpdate,
    OnlyUpdateMovable,
    NeverUpdate,
};

