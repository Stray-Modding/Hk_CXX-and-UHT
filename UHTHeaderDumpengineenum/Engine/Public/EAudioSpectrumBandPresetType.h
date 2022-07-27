#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrumBandPresetType.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrumBandPresetType : uint8 {
    KickDrum,
    SnareDrum,
    Voice,
    Cymbals,
};

