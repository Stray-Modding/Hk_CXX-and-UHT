#pragma once
#include "CoreMinimal.h"
#include "ParticleRandomSeedInfo.generated.h"

USTRUCT(BlueprintType)
struct FParticleRandomSeedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    uint8 bGetSeedFromInstance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInstanceSeedIsIndex: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bResetSeedOnEmitterLooping: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRandomlySelectSeedArray: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> RandomSeeds;
    
    ENGINE_API FParticleRandomSeedInfo();
};

