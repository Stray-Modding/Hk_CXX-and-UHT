#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSizeBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleSizeMultiplyLife.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector LifeMultiplier;
    
    UPROPERTY(EditAnywhere)
    uint8 MultiplyX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 MultiplyY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 MultiplyZ: 1;
    
    UParticleModuleSizeMultiplyLife();
};

