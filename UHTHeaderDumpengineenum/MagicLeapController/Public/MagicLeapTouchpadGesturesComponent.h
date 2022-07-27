#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MagicLeapTouchpadGesturesComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPCONTROLLER_API UMagicLeapTouchpadGesturesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTouchpadGestureEvent OnTouchpadGestureStart;
    
    UPROPERTY(BlueprintAssignable)
    FTouchpadGestureEvent OnTouchpadGestureContinue;
    
    UPROPERTY(BlueprintAssignable)
    FTouchpadGestureEvent OnTouchpadGestureEnd;
    
    UMagicLeapTouchpadGesturesComponent();
};

