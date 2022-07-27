#pragma once
#include "CoreMinimal.h"
#include "IntegralKey.generated.h"

USTRUCT(BlueprintType)
struct FIntegralKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    ENGINE_API FIntegralKey();
};

