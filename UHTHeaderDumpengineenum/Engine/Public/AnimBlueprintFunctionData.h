#pragma once
#include "CoreMinimal.h"
#include "AnimBlueprintFunctionData.generated.h"

USTRUCT(BlueprintType)
struct FAnimBlueprintFunctionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TFieldPath<FStructProperty> OutputPoseNodeProperty;
    
    UPROPERTY()
    TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties;
    
    UPROPERTY()
    TArray<TFieldPath<FProperty>> InputProperties;
    
    ENGINE_API FAnimBlueprintFunctionData();
};

