#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVelocityBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleVelocityOverLifetime.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector VelOverLife;
    
    UPROPERTY(EditAnywhere, Export)
    uint8 Absolute: 1;
    
    UParticleModuleVelocityOverLifetime();
};

