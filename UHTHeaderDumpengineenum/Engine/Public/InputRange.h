#pragma once
#include "CoreMinimal.h"
#include "InputRange.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FInputRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;
    
    FInputRange();
};

