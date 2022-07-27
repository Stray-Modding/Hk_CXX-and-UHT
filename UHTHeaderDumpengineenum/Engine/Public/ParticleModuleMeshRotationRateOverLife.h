#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRateBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleMeshRotationRateOverLife.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector RotRate;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleRotRate: 1;
    
    UParticleModuleMeshRotationRateOverLife();
};

