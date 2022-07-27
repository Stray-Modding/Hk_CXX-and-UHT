#pragma once
#include "CoreMinimal.h"
#include "ParticleBurst.generated.h"

USTRUCT(BlueprintType)
struct FParticleBurst {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    int32 CountLow;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    ENGINE_API FParticleBurst();
};

