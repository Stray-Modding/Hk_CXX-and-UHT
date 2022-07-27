#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSizeBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleSizeScale.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSizeScale : public UParticleModuleSizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector SizeScale;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableZ: 1;
    
    UParticleModuleSizeScale();
};

