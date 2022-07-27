#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BranchingPointNotifyPayload -FallbackName=BranchingPointNotifyPayload
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnMontagePlayDelegateDelegate.h"
#include "PlayMontageCallbackProxy.generated.h"

class UAnimMontage;
class UPlayMontageCallbackProxy;
class USkeletalMeshComponent;

UCLASS(BlueprintType, MinimalAPI)
class UPlayMontageCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMontagePlayDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontagePlayDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontagePlayDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontagePlayDelegate OnNotifyBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontagePlayDelegate OnNotifyEnd;
    
    UPlayMontageCallbackProxy();
protected:
    UFUNCTION()
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
    
};

