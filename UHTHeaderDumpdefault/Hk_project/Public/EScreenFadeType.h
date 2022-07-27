#pragma once
#include "CoreMinimal.h"
#include "EScreenFadeType.generated.h"

UENUM()
enum EScreenFadeType {
    ScreenFadeType_Default,
    ScreenFadeType_Game,
    ScreenFadeType_COUNT,
    ScreenFadeType_MAX UMETA(Hidden),
};

