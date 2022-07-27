#pragma once
#include "CoreMinimal.h"
#include "DynamicsBandSettings.generated.h"

USTRUCT(BlueprintType)
struct FDynamicsBandSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrossoverTopFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReleaseTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeBandwidthDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutputGainDb;
    
    SYNTHESIS_API FDynamicsBandSettings();
};

