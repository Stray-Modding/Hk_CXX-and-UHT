#pragma once
#include "CoreMinimal.h"
#include "ESpeedTreeGeometryType.generated.h"

UENUM(BlueprintType)
enum ESpeedTreeGeometryType {
    STG_Branch,
    STG_Frond,
    STG_Leaf,
    STG_FacingLeaf,
    STG_Billboard,
    STG_MAX UMETA(Hidden),
};

