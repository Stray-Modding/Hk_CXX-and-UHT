#pragma once
#include "CoreMinimal.h"
#include "EInputEvent.generated.h"

UENUM(BlueprintType)
enum EInputEvent {
    IE_Pressed,
    IE_Released,
    IE_Repeat,
    IE_DoubleClick,
    IE_Axis,
    IE_MAX UMETA(Hidden),
};

