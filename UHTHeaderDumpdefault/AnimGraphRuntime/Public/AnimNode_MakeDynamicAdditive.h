#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_MakeDynamicAdditive.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_MakeDynamicAdditive : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMeshSpaceAdditive;
    
    FAnimNode_MakeDynamicAdditive();
};

