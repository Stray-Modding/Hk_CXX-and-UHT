#pragma once
#include "CoreMinimal.h"
#include "BuilderPoly.generated.h"

USTRUCT(BlueprintType)
struct FBuilderPoly {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> VertexIndices;
    
    UPROPERTY()
    int32 Direction;
    
    UPROPERTY()
    FName ItemName;
    
    UPROPERTY()
    int32 PolyFlags;
    
    ENGINE_API FBuilderPoly();
};

