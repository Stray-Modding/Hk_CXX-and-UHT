#pragma once
#include "CoreMinimal.h"
#include "ParticleReplayState.generated.h"

UENUM(BlueprintType)
enum ParticleReplayState {
    PRS_Disabled,
    PRS_Capturing,
    PRS_Replaying,
    PRS_MAX UMETA(Hidden),
};

