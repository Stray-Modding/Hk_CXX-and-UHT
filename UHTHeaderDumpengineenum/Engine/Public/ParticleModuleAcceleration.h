#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleAcceleration.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Acceleration;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyOwnerScale: 1;
    
    UParticleModuleAcceleration();
};

