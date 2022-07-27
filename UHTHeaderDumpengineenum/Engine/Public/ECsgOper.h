#pragma once
#include "CoreMinimal.h"
#include "ECsgOper.generated.h"

UENUM(BlueprintType)
enum ECsgOper {
    CSG_Active,
    CSG_Add,
    CSG_Subtract,
    CSG_Intersect,
    CSG_Deintersect,
    CSG_None,
    CSG_MAX UMETA(Hidden),
};

