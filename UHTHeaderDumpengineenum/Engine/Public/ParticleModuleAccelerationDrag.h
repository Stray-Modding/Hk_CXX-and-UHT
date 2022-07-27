#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleAccelerationDrag.generated.h"

class UDistributionFloat;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDistributionFloat* DragCoefficient;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat DragCoefficientRaw;
    
    UParticleModuleAccelerationDrag();
};

