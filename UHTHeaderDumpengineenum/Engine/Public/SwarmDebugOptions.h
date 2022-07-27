#pragma once
#include "CoreMinimal.h"
#include "SwarmDebugOptions.generated.h"

USTRUCT()
struct FSwarmDebugOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bDistributionEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceContentExport: 1;
    
    UPROPERTY()
    uint8 bInitialized: 1;
    
    ENGINE_API FSwarmDebugOptions();
};

