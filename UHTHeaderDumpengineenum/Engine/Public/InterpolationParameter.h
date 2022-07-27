#pragma once
#include "CoreMinimal.h"
#include "EFilterInterpolationType.h"
#include "InterpolationParameter.generated.h"

USTRUCT(BlueprintType)
struct FInterpolationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFilterInterpolationType> InterpolationType;
    
    ENGINE_API FInterpolationParameter();
};

