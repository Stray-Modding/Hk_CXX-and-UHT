#pragma once
#include "CoreMinimal.h"
#include "ETrackToggleAction.generated.h"

UENUM(BlueprintType)
enum ETrackToggleAction {
    ETTA_Off,
    ETTA_On,
    ETTA_Toggle,
    ETTA_Trigger,
    ETTA_MAX UMETA(Hidden),
};

