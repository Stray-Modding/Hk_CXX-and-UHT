#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_SingleNode.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_SingleNode : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    FAnimNode_SingleNode();
};

