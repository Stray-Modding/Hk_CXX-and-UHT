#pragma once
#include "CoreMinimal.h"
#include "EInterpTrackMoveRotMode.generated.h"

UENUM(BlueprintType)
enum EInterpTrackMoveRotMode {
    IMR_Keyframed,
    IMR_LookAtGroup,
    IMR_Ignore,
    IMR_MAX UMETA(Hidden),
};

