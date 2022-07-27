#pragma once
#include "CoreMinimal.h"
#include "ETransitionLogicType.generated.h"

UENUM(BlueprintType)
namespace ETransitionLogicType {
    enum Type {
        TLT_StandardBlend,
        TLT_Inertialization,
        TLT_Custom,
        TLT_MAX UMETA(Hidden),
    };
}

