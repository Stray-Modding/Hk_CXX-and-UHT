#pragma once
#include "CoreMinimal.h"
#include "EDynamicForceFeedbackAction.generated.h"

UENUM(BlueprintType)
namespace EDynamicForceFeedbackAction {
    enum Type {
        Start,
        Update,
        Stop,
    };
}

