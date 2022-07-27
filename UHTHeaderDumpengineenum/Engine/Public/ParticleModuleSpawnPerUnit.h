#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSpawnBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleSpawnPerUnit.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float UnitScalar;
    
    UPROPERTY(EditAnywhere)
    float MovementTolerance;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat SpawnPerUnit;
    
    UPROPERTY(EditAnywhere)
    float MaxFrameDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreSpawnRateWhenMoving: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreMovementAlongX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreMovementAlongY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreMovementAlongZ: 1;
    
    UParticleModuleSpawnPerUnit();
};

