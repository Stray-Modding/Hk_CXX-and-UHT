#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_Root.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_Root : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Result;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName Group;
    
    FAnimNode_Root();
};

