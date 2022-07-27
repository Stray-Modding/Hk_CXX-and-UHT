#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARPoseUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARPoseUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FTransform> JointTransforms;
    
    AUGMENTEDREALITY_API FARPoseUpdatePayload();
};

