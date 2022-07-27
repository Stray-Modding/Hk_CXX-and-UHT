#pragma once
#include "CoreMinimal.h"
#include "InputScaleBias.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FInputScaleBias {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Bias;
    
    FInputScaleBias();
};

