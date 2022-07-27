#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleAccelerationDragScaleOverLife.generated.h"

class UDistributionFloat;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDistributionFloat* DragScale;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat DragScaleRaw;
    
    UParticleModuleAccelerationDragScaleOverLife();
};

