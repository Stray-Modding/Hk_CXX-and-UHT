#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_SoundEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HK_PROJECT_API UAnimNotify_SoundEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Velocity;
    
    UAnimNotify_SoundEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVelocity(float _velocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetEventName(FName _eventName) const;
    
};

