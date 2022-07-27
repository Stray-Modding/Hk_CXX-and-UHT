#pragma once
#include "CoreMinimal.h"
#include "BoneReference.h"
#include "BlendProfileBoneEntry.generated.h"

USTRUCT(BlueprintType)
struct FBlendProfileBoneEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(EditAnywhere)
    float BlendScale;
    
    ENGINE_API FBlendProfileBoneEntry();
};

