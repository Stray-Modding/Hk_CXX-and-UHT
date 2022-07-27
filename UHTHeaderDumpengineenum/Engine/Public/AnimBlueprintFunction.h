#pragma once
#include "CoreMinimal.h"
#include "AnimBlueprintFunction.generated.h"

USTRUCT(BlueprintType)
struct FAnimBlueprintFunction {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName Group;
    
    UPROPERTY()
    int32 OutputPoseNodeIndex;
    
    UPROPERTY()
    TArray<FName> InputPoseNames;
    
    UPROPERTY()
    TArray<int32> InputPoseNodeIndices;
    
    UPROPERTY(Transient)
    bool bImplemented;
    
    ENGINE_API FAnimBlueprintFunction();
};

