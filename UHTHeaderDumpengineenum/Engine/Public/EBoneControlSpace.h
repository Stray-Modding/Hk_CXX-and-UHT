#pragma once
#include "CoreMinimal.h"
#include "EBoneControlSpace.generated.h"

UENUM(BlueprintType)
enum EBoneControlSpace {
    BCS_WorldSpace,
    BCS_ComponentSpace,
    BCS_ParentBoneSpace,
    BCS_BoneSpace,
    BCS_MAX UMETA(Hidden),
};

