#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSizeBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleSize.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSize : public UParticleModuleSizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector StartSize;
    
    UParticleModuleSize();
};

