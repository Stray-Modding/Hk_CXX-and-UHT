#pragma once
#include "CoreMinimal.h"
#include "InputAxisProperties.generated.h"

USTRUCT(BlueprintType)
struct FInputAxisProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DeadZone;
    
    UPROPERTY(EditAnywhere)
    float Sensitivity;
    
    UPROPERTY(EditAnywhere)
    float Exponent;
    
    UPROPERTY(EditAnywhere)
    uint8 bInvert: 1;
    
    ENGINE_API FInputAxisProperties();
};

