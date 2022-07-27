#pragma once
#include "CoreMinimal.h"
#include "EAudioComponentPlayState.generated.h"

UENUM(BlueprintType)
enum class EAudioComponentPlayState : uint8 {
    Playing,
    Stopped,
    Paused,
    FadingIn,
    FadingOut,
    Count,
};

