#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AnimPhysPlanarLimit.generated.h"

USTRUCT(BlueprintType)
struct FAnimPhysPlanarLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference DrivingBone;
    
    UPROPERTY(EditAnywhere)
    FTransform PlaneTransform;
    
    ANIMGRAPHRUNTIME_API FAnimPhysPlanarLimit();
};

