#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleMeshRotation.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector StartRotation;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritParent: 1;
    
    UParticleModuleMeshRotation();
};

