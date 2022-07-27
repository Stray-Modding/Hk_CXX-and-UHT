#pragma once
#include "CoreMinimal.h"
#include "AutoCompleteNode.generated.h"

USTRUCT()
struct FAutoCompleteNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 IndexChar;
    
    UPROPERTY()
    TArray<int32> AutoCompleteListIndices;
    
    ENGINE_API FAutoCompleteNode();
};

