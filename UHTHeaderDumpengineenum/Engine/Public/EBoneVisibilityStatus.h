#pragma once
#include "CoreMinimal.h"
#include "EBoneVisibilityStatus.generated.h"

UENUM(BlueprintType)
enum EBoneVisibilityStatus {
    BVS_HiddenByParent,
    BVS_Visible,
    BVS_ExplicitlyHidden,
    BVS_MAX UMETA(Hidden),
};

