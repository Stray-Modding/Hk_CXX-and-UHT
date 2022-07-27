#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ELiveLinkAxis.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkFramePreProcessor -FallbackName=LiveLinkFramePreProcessor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "LiveLinkTransformAxisSwitchPreProcessor.generated.h"

UCLASS(EditInlineNew)
class LIVELINK_API ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ELiveLinkAxis FrontAxis;
    
    UPROPERTY(EditAnywhere)
    ELiveLinkAxis RightAxis;
    
    UPROPERTY(EditAnywhere)
    ELiveLinkAxis UpAxis;
    
    UPROPERTY(EditAnywhere)
    bool bUseOffsetPosition;
    
    UPROPERTY(EditAnywhere)
    bool bUseOffsetOrientation;
    
    UPROPERTY(EditAnywhere)
    FVector OffsetPosition;
    
    UPROPERTY(EditAnywhere)
    FRotator OffsetOrientation;
    
public:
    ULiveLinkTransformAxisSwitchPreProcessor();
};

