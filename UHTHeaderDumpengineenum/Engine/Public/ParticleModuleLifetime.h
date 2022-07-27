#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLifetimeBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleLifetime.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat LifeTime;
    
    UParticleModuleLifetime();
};

