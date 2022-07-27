#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleLocationPrimitiveSphere.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat StartRadius;
    
    UParticleModuleLocationPrimitiveSphere();
};

