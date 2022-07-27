#pragma once
#include "CoreMinimal.h"
#include "ExponentialHeightFogData.generated.h"

USTRUCT(BlueprintType)
struct FExponentialHeightFogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float FogDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float FogHeightOffset;
    
    ENGINE_API FExponentialHeightFogData();
};

