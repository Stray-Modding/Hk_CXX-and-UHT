#pragma once
#include "CoreMinimal.h"
#include "TentDistribution.generated.h"

USTRUCT(BlueprintType)
struct FTentDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float TipAltitude;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float TipValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float Width;
    
    ENGINE_API FTentDistribution();
};

