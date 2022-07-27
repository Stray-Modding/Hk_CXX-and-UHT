#pragma once
#include "CoreMinimal.h"
#include "EAudioVolumeLocationState.generated.h"

UENUM(BlueprintType)
enum class EAudioVolumeLocationState : uint8 {
    InsideTheVolume,
    OutsideTheVolume,
};

