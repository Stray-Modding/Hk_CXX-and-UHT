#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRateBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleMeshRotationRate.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector StartRotationRate;
    
    UParticleModuleMeshRotationRate();
};

