#pragma once
#include "CoreMinimal.h"
#include "BoneReference.h"
#include "PerBoneInterpolation.generated.h"

USTRUCT(BlueprintType)
struct FPerBoneInterpolation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(EditAnywhere)
    float InterpolationSpeedPerSec;
    
    ENGINE_API FPerBoneInterpolation();
};

