#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_SaveCachedPose.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_SaveCachedPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Pose;
    
    UPROPERTY()
    FName CachePoseName;
    
    FAnimNode_SaveCachedPose();
};

