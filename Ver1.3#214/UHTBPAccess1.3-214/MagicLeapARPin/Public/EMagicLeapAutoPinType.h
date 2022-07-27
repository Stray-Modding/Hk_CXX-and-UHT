#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapAutoPinType.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapAutoPinType : uint8 {
    OnlyOnDataRestoration,
    Always,
    Never,
};

