#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandQuantization.h"
#include "EQuarztQuantizationReference.h"
#include "QuartzQuantizationBoundary.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzQuantizationBoundary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EQuartzCommandQuantization Quantization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EQuarztQuantizationReference CountingReferencePoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bFireOnClockStart;
    
    FQuartzQuantizationBoundary();
};

