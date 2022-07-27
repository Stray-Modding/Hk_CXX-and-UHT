#pragma once
#include "CoreMinimal.h"
#include "EStandbyType.generated.h"

UENUM(BlueprintType)
enum EStandbyType {
    STDBY_Rx,
    STDBY_Tx,
    STDBY_BadPing,
    STDBY_MAX UMETA(Hidden),
};

