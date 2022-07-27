#pragma once
#include "CoreMinimal.h"
#include "EScreenOrientation.generated.h"

UENUM(BlueprintType)
namespace EScreenOrientation {
    enum Type {
        Unknown,
        Portrait,
        PortraitUpsideDown,
        LandscapeLeft,
        LandscapeRight,
        FaceUp,
        FaceDown,
    };
}

