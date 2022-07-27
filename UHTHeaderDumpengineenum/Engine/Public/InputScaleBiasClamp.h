#pragma once
#include "CoreMinimal.h"
#include "InputRange.h"
#include "InputScaleBiasClamp.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FInputScaleBiasClamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMapRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClampResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInterpResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputRange InRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputRange OutRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Bias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClampMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeedIncreasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeedDecreasing;
    
    FInputScaleBiasClamp();
};

