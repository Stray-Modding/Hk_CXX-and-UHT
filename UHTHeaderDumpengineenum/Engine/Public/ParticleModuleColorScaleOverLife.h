#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleColorBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleColorScaleOverLife.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector ColorScaleOverLife;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat AlphaScaleOverLife;
    
    UPROPERTY(EditAnywhere)
    uint8 bEmitterTime: 1;
    
    UParticleModuleColorScaleOverLife();
};

