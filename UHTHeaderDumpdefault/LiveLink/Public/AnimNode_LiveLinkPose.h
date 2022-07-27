#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "AnimNode_LiveLinkPose.generated.h"

class ULiveLinkRetargetAsset;

USTRUCT(BlueprintType)
struct LIVELINK_API FAnimNode_LiveLinkPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink InputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLiveLinkSubjectName LiveLinkSubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset;
    
    UPROPERTY(Transient)
    ULiveLinkRetargetAsset* CurrentRetargetAsset;
    
    FAnimNode_LiveLinkPose();
};

