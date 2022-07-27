#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleMeshRotation.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleMeshRotation_Seeded.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleMeshRotation_Seeded();
};

