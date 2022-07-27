#pragma once
#include "CoreMinimal.h"
#include "ActiveHapticFeedbackEffect.generated.h"

class UHapticFeedbackEffect_Base;

USTRUCT()
struct ENGINE_API FActiveHapticFeedbackEffect {
    GENERATED_BODY()
public:
    UPROPERTY()
    UHapticFeedbackEffect_Base* HapticEffect;
    
    FActiveHapticFeedbackEffect();
};

