#pragma once
#include "CoreMinimal.h"
#include "BandwidthTestItem.h"
#include "BandwidthTestGenerator.generated.h"

USTRUCT(BlueprintType)
struct FBandwidthTestGenerator {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBandwidthTestItem> ReplicatedBuffers;
    
    ENGINE_API FBandwidthTestGenerator();
};

