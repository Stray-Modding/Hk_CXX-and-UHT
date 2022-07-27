#pragma once
#include "CoreMinimal.h"
#include "EEdGraphPinDirection.generated.h"

UENUM(BlueprintType)
enum EEdGraphPinDirection {
    EGPD_Input,
    EGPD_Output,
    EGPD_MAX UMETA(Hidden),
};

