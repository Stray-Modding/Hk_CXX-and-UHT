#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkFrameTranslator -FallbackName=LiveLinkFrameTranslator
#include "LiveLinkAnimationRoleToTransform.generated.h"

UCLASS(EditInlineNew)
class LIVELINK_API ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
public:
    ULiveLinkAnimationRoleToTransform();
};

