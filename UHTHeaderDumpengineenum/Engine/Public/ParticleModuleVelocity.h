#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVelocityBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleVelocity.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocity : public UParticleModuleVelocityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector startVelocity;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat StartVelocityRadial;
    
    UParticleModuleVelocity();
};

