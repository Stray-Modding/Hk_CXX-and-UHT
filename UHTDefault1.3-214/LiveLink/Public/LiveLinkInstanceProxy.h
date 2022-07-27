#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "AnimNode_LiveLinkPose.h"
#include "LiveLinkInstanceProxy.generated.h"

USTRUCT()
struct LIVELINK_API FLiveLinkInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimNode_LiveLinkPose PoseNode;
    
    FLiveLinkInstanceProxy();
};

