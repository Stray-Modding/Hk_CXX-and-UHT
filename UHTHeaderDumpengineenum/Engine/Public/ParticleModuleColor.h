#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleColorBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleColor.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleColor : public UParticleModuleColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector StartColor;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat StartAlpha;
    
    UPROPERTY(EditAnywhere)
    uint8 bClampAlpha: 1;
    
    UParticleModuleColor();
};

