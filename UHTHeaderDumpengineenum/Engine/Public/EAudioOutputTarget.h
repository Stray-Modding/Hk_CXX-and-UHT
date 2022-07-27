#pragma once
#include "CoreMinimal.h"
#include "EAudioOutputTarget.generated.h"

UENUM(BlueprintType)
namespace EAudioOutputTarget {
    enum Type {
        Speaker,
        Controller,
        ControllerFallbackToSpeaker,
    };
}

