#pragma once
#include "CoreMinimal.h"
#include "EEvaluatorMode.generated.h"

UENUM(BlueprintType)
namespace EEvaluatorMode {
    enum Type {
        EM_Standard,
        EM_Freeze,
        EM_DelayedFreeze,
        EM_MAX UMETA(Hidden),
    };
}

