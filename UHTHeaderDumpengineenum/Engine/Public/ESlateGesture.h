#pragma once
#include "CoreMinimal.h"
#include "ESlateGesture.generated.h"

UENUM(BlueprintType)
enum class ESlateGesture : uint8 {
    None,
    Scroll,
    Magnify,
    Swipe,
    Rotate,
    LongPress,
};

