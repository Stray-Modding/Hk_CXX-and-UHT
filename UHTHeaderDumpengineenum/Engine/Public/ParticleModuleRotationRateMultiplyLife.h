#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRateBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleRotationRateMultiplyLife.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat LifeMultiplier;
    
    UParticleModuleRotationRateMultiplyLife();
};

