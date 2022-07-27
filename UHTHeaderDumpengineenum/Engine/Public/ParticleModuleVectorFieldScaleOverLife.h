#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleVectorFieldScaleOverLife.generated.h"

class UDistributionFloat;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDistributionFloat* VectorFieldScaleOverLife;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat VectorFieldScaleOverLifeRaw;
    
    UParticleModuleVectorFieldScaleOverLife();
};

