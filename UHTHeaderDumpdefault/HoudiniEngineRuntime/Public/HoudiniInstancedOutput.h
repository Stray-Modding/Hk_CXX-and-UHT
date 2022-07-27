#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HoudiniInstancedOutput.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniInstancedOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UObject> OriginalObject;
    
    UPROPERTY()
    int32 OriginalObjectIndex;
    
    UPROPERTY()
    TArray<FTransform> OriginalTransforms;
    
    UPROPERTY()
    TArray<TSoftObjectPtr<UObject>> VariationObjects;
    
    UPROPERTY()
    TArray<FTransform> VariationTransformOffsets;
    
    UPROPERTY()
    TArray<int32> TransformVariationIndices;
    
    UPROPERTY()
    TArray<int32> OriginalInstanceIndices;
    
    UPROPERTY()
    bool bChanged;
    
    UPROPERTY()
    bool bStale;
    
    FHoudiniInstancedOutput();
};

