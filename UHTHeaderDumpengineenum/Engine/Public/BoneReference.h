#pragma once
#include "CoreMinimal.h"
#include "BoneReference.generated.h"

USTRUCT(BlueprintType)
struct FBoneReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    ENGINE_API FBoneReference();
};

