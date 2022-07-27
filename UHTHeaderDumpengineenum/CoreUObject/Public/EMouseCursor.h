#pragma once
#include "CoreMinimal.h"
#include "EMouseCursor.generated.h"

UENUM(BlueprintType)
namespace EMouseCursor {
    enum Type {
        None,
        Default,
        TextEditBeam,
        ResizeLeftRight,
        ResizeUpDown,
        ResizeSouthEast,
        ResizeSouthWest,
        CardinalCross,
        Crosshairs,
        Hand,
        GrabHand,
        GrabHandClosed,
        SlashedCircle,
        EyeDropper,
    };
}

