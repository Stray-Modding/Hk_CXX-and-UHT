#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "ComponentSpacePoseLink.h"
#include "AnimNode_ConvertComponentToLocalSpace.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentSpacePoseLink ComponentPose;
    
    FAnimNode_ConvertComponentToLocalSpace();
};

