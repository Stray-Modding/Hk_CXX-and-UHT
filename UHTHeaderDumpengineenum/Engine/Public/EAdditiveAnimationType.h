#pragma once
#include "CoreMinimal.h"
#include "EAdditiveAnimationType.generated.h"

UENUM(BlueprintType)
enum EAdditiveAnimationType {
    AAT_None,
    AAT_LocalSpaceBase,
    AAT_RotationOffsetMeshSpace,
    AAT_MAX UMETA(Hidden),
};

