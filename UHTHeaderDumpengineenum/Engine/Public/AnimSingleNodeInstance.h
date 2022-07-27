#pragma once
#include "CoreMinimal.h"
#include "AnimInstance.h"
#include "PostEvaluateAnimEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimSingleNodeInstance.generated.h"

class UAnimationAsset;

UCLASS(NonTransient)
class ENGINE_API UAnimSingleNodeInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAnimationAsset* CurrentAsset;
    
    UPROPERTY(Transient)
    FPostEvaluateAnimEvent PostEvaluateAnimEvent;
    
    UAnimSingleNodeInstance();
    UFUNCTION(BlueprintCallable)
    void StopAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool bInReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewCurveOverride(const FName& PoseName, float Value, bool bRemoveIfZero);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float InPosition, bool bFireNotifies);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaying(bool bIsPlaying);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bIsLooping);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpaceInput(const FVector& InBlendInput);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
    
    UFUNCTION(BlueprintCallable)
    float GetLength();
    
    UFUNCTION(BlueprintPure)
    UAnimationAsset* GetAnimationAsset() const;
    
};

