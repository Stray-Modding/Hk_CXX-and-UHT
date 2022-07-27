#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleColorBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleColorOverLife.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleColorOverLife : public UParticleModuleColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector ColorOverLife;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat AlphaOverLife;
    
    UPROPERTY(EditAnywhere)
    uint8 bClampAlpha: 1;
    
    UParticleModuleColorOverLife();
};

