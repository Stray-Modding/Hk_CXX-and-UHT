#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_ConvertLocalToComponentSpace.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink LocalPose;
    
    FAnimNode_ConvertLocalToComponentSpace();
};

