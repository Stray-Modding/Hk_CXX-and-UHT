#pragma once
#include "CoreMinimal.h"
#include "EInterpCurveMode.generated.h"

UENUM(BlueprintType)
enum EInterpCurveMode {
    CIM_Linear,
    CIM_CurveAuto,
    CIM_Constant,
    CIM_CurveUser,
    CIM_CurveBreak,
    CIM_CurveAutoClamped,
    CIM_MAX UMETA(Hidden),
};

