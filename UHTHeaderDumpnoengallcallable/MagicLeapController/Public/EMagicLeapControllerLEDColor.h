#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapControllerLEDColor.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapControllerLEDColor : uint8 {
    BrightMissionRed,
    PastelMissionRed,
    BrightFloridaOrange,
    PastelFloridaOrange,
    BrightLunaYellow,
    PastelLunaYellow,
    BrightNebulaPink,
    PastelNebulaPink,
    BrightCosmicPurple,
    PastelCosmicPurple,
    BrightMysticBlue,
    PastelMysticBlue,
    BrightCelestialBlue,
    PastelCelestialBlue,
    BrightShaggleGreen,
    PastelShaggleGreen,
};

