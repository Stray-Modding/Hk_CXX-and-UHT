#pragma once
#include "CoreMinimal.h"
#include "BandwidthTestItem.generated.h"

USTRUCT(BlueprintType)
struct FBandwidthTestItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Kilobyte;
    
    ENGINE_API FBandwidthTestItem();
};

