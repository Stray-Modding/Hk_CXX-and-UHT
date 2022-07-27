#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleRotationOverLifetime.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat RotationOverLife;
    
    UPROPERTY(EditAnywhere)
    uint8 Scale: 1;
    
    UParticleModuleRotationOverLifetime();
};

