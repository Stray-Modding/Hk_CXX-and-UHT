#pragma once
#include "CoreMinimal.h"
#include "EGraphType.generated.h"

UENUM(BlueprintType)
enum EGraphType {
    GT_Function,
    GT_Ubergraph,
    GT_Macro,
    GT_Animation,
    GT_StateMachine,
    GT_MAX UMETA(Hidden),
};

