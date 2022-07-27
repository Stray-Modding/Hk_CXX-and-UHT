#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_LinkedInputPose.generated.h"

USTRUCT()
struct ENGINE_API FAnimNode_LinkedInputPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY()
    FName Graph;
    
    UPROPERTY()
    FPoseLink InputPose;
    
    FAnimNode_LinkedInputPose();
};

