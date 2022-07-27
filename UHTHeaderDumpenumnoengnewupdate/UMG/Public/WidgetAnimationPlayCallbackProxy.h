#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WidgetAnimationResultDelegate.h"
#include "EUMGSequencePlayMode.h"
#include "WidgetAnimationPlayCallbackProxy.generated.h"

class UUMGSequencePlayer;
class UWidgetAnimationPlayCallbackProxy;
class UUserWidget;
class UWidgetAnimation;

UCLASS(BlueprintType, MinimalAPI)
class UWidgetAnimationPlayCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWidgetAnimationResult Finished;
    
    UWidgetAnimationPlayCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
};

