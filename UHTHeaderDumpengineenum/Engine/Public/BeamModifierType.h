#pragma once
#include "CoreMinimal.h"
#include "BeamModifierType.generated.h"

UENUM(BlueprintType)
enum BeamModifierType {
    PEB2MT_Source,
    PEB2MT_Target,
    PEB2MT_MAX UMETA(Hidden),
};

