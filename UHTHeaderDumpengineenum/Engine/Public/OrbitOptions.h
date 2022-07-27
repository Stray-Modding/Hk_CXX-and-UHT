#pragma once
#include "CoreMinimal.h"
#include "OrbitOptions.generated.h"

USTRUCT(BlueprintType)
struct FOrbitOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bProcessDuringSpawn: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bProcessDuringUpdate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseEmitterTime: 1;
    
    ENGINE_API FOrbitOptions();
};

