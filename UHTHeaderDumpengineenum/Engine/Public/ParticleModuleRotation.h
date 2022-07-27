#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleRotationBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleRotation.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleRotation : public UParticleModuleRotationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat StartRotation;
    
    UParticleModuleRotation();
};

