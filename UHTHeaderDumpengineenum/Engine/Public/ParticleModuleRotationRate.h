#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationRateBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleRotationRate.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat StartRotationRate;
    
    UParticleModuleRotationRate();
};

