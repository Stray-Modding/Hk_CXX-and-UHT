#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_Inertialization.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_Inertialization : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Source;
    
    FAnimNode_Inertialization();
};

