#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleVectorFieldScale.generated.h"

class UDistributionFloat;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDistributionFloat* VectorFieldScale;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat VectorFieldScaleRaw;
    
    UParticleModuleVectorFieldScale();
};

