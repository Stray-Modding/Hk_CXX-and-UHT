#pragma once
#include "CoreMinimal.h"
#include "Beam2SourceTargetMethod.generated.h"

UENUM(BlueprintType)
enum Beam2SourceTargetMethod {
    PEB2STM_Default,
    PEB2STM_UserSet,
    PEB2STM_Emitter,
    PEB2STM_Particle,
    PEB2STM_Actor,
    PEB2STM_MAX UMETA(Hidden),
};

