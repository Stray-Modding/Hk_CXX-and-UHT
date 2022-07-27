#pragma once
#include "CoreMinimal.h"
#include "DestructibleAdvancedParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleAdvancedParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DamageCap;
    
    UPROPERTY(EditAnywhere)
    float ImpactVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float MaxChunkSpeed;
    
    UPROPERTY(EditAnywhere)
    float FractureImpulseScale;
    
    APEXDESTRUCTION_API FDestructibleAdvancedParameters();
};

