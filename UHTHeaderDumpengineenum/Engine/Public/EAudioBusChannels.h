#pragma once
#include "CoreMinimal.h"
#include "EAudioBusChannels.generated.h"

UENUM(BlueprintType)
enum class EAudioBusChannels : uint8 {
    Mono,
    Stereo,
};

