#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "LiveLinkInstance.generated.h"

class ULiveLinkRetargetAsset;

UCLASS(NonTransient)
class LIVELINK_API ULiveLinkInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ULiveLinkRetargetAsset* CurrentRetargetAsset;
    
public:
    ULiveLinkInstance();
    UFUNCTION(BlueprintCallable)
    void SetSubject(FLiveLinkSubjectName SubjectName);
    
    UFUNCTION(BlueprintCallable)
    void SetRetargetAsset(TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset);
    
};

