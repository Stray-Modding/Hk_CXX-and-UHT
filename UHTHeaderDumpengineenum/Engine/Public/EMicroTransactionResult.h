#pragma once
#include "CoreMinimal.h"
#include "EMicroTransactionResult.generated.h"

UENUM(BlueprintType)
enum EMicroTransactionResult {
    MTR_Succeeded,
    MTR_Failed,
    MTR_Canceled,
    MTR_RestoredFromServer,
    MTR_MAX UMETA(Hidden),
};

