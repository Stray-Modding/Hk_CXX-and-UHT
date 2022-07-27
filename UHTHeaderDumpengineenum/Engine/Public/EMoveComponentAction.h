#pragma once
#include "CoreMinimal.h"
#include "EMoveComponentAction.generated.h"

UENUM(BlueprintType)
namespace EMoveComponentAction {
    enum Type {
        Move,
        Stop,
        Return,
    };
}

