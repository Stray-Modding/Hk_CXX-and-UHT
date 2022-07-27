#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleSourceMovement.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleSourceMovement : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector SourceMovementScale;
    
    UParticleModuleSourceMovement();
};

