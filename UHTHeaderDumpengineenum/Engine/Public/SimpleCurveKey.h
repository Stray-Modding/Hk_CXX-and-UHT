#pragma once
#include "CoreMinimal.h"
#include "SimpleCurveKey.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSimpleCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    FSimpleCurveKey();
};

