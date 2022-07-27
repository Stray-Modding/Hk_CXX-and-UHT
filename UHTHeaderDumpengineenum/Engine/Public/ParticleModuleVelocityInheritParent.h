#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVelocityBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleVelocityInheritParent.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Scale;
    
    UParticleModuleVelocityInheritParent();
};

