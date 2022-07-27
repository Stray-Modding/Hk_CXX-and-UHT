#pragma once
#include "CoreMinimal.h"
#include "WidgetAnimationDynamicEventDelegate.h"
#include "EWidgetAnimationEvent.h"
#include "AnimationEventBinding.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FAnimationEventBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWidgetAnimation* Animation;
    
    UPROPERTY()
    FWidgetAnimationDynamicEvent Delegate;
    
    UPROPERTY()
    EWidgetAnimationEvent AnimationEvent;
    
    UPROPERTY()
    FName UserTag;
    
    UMG_API FAnimationEventBinding();
};

