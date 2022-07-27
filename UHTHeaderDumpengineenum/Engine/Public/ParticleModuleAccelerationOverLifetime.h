#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleAccelerationOverLifetime.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector AccelOverLife;
    
    UParticleModuleAccelerationOverLifetime();
};

