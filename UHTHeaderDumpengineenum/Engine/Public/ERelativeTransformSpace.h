#pragma once
#include "CoreMinimal.h"
#include "ERelativeTransformSpace.generated.h"

UENUM(BlueprintType)
enum ERelativeTransformSpace {
    RTS_World,
    RTS_Actor,
    RTS_Component,
    RTS_ParentBoneSpace,
    RTS_MAX UMETA(Hidden),
};

