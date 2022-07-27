#pragma once
#include "CoreMinimal.h"
#include "ESceneDepthPriorityGroup.generated.h"

UENUM(BlueprintType)
enum ESceneDepthPriorityGroup {
    SDPG_World,
    SDPG_Foreground,
    SDPG_MAX UMETA(Hidden),
};

