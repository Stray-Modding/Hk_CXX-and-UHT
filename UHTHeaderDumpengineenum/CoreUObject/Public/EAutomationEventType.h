#pragma once
#include "CoreMinimal.h"
#include "EAutomationEventType.generated.h"

UENUM(BlueprintType)
enum class EAutomationEventType : uint8 {
    Info,
    Warning,
    Error,
};

