#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingRegion.h"
#include "SkeletalMeshSamplingBuiltData.h"
#include "SkeletalMeshSamplingInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkeletalMeshSamplingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSkeletalMeshSamplingRegion> Regions;
    
private:
    UPROPERTY()
    FSkeletalMeshSamplingBuiltData BuiltData;
    
public:
    FSkeletalMeshSamplingInfo();
};

