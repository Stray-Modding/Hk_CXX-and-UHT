#pragma once
#include "CoreMinimal.h"
#include "ESourceBusChannels.generated.h"

UENUM(BlueprintType)
enum class ESourceBusChannels : uint8 {
    Mono,
    Stereo,
};

