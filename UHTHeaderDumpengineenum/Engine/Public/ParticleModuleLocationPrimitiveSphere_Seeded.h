#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveSphere.h"
#include "ParticleRandomSeedInfo.h"
#include "ParticleModuleLocationPrimitiveSphere_Seeded.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UParticleModuleLocationPrimitiveSphere_Seeded();
};

