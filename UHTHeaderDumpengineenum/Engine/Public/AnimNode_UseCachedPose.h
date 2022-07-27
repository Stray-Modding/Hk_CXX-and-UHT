#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_UseCachedPose.generated.h"

USTRUCT()
struct ENGINE_API FAnimNode_UseCachedPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPoseLink LinkToCachingNode;
    
    UPROPERTY()
    FName CachePoseName;
    
    FAnimNode_UseCachedPose();
};

