#pragma once
#include "CoreMinimal.h"
#include "ECustomBoneAttributeLookup.generated.h"

UENUM(BlueprintType)
enum class ECustomBoneAttributeLookup : uint8 {
    BoneOnly,
    ImmediateParent,
    ParentHierarchy,
};

