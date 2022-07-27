#pragma once
#include "CoreMinimal.h"
#include "PurchaseType.generated.h"

UENUM(BlueprintType)
enum class PurchaseType : uint8 {
    Consumable,
    Nonconsumable,
    Undefined,
};

