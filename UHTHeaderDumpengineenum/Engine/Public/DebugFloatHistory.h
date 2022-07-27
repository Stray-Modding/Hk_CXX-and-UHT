#pragma once
#include "CoreMinimal.h"
#include "DebugFloatHistory.generated.h"

USTRUCT(BlueprintType)
struct FDebugFloatHistory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<float> Samples;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoAdjustMinMax;
    
    ENGINE_API FDebugFloatHistory();
};

