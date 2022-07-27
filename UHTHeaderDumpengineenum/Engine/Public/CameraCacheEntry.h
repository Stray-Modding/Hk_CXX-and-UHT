#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "CameraCacheEntry.generated.h"

USTRUCT(BlueprintType)
struct FCameraCacheEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Timestamp;
    
    UPROPERTY()
    FMinimalViewInfo POV;
    
    ENGINE_API FCameraCacheEntry();
};

