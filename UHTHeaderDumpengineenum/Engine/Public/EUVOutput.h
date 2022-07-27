#pragma once
#include "CoreMinimal.h"
#include "EUVOutput.generated.h"

UENUM(BlueprintType)
enum class EUVOutput : uint8 {
    DoNotOutputChannel,
    OutputChannel,
};

