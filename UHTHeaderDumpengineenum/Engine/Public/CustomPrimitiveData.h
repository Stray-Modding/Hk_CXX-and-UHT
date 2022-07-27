#pragma once
#include "CoreMinimal.h"
#include "CustomPrimitiveData.generated.h"

USTRUCT(BlueprintType)
struct FCustomPrimitiveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> Data;
    
    ENGINE_API FCustomPrimitiveData();
};

