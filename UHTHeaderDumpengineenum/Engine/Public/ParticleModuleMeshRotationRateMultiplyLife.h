#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRateBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleMeshRotationRateMultiplyLife.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector LifeMultiplier;
    
    UParticleModuleMeshRotationRateMultiplyLife();
};

