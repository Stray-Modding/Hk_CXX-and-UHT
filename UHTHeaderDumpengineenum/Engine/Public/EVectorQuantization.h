#pragma once
#include "CoreMinimal.h"
#include "EVectorQuantization.generated.h"

UENUM(BlueprintType)
enum class EVectorQuantization : uint8 {
    RoundWholeNumber,
    RoundOneDecimal,
    RoundTwoDecimals,
};

