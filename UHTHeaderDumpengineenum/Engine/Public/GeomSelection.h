#pragma once
#include "CoreMinimal.h"
#include "GeomSelection.generated.h"

USTRUCT(BlueprintType)
struct FGeomSelection {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Type;
    
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    int32 SelectionIndex;
    
    ENGINE_API FGeomSelection();
};

