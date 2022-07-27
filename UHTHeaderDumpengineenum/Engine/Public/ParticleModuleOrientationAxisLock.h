#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleOrientationBase.h"
#include "EParticleAxisLock.h"
#include "ParticleModuleOrientationAxisLock.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleAxisLock> LockAxisFlags;
    
    UParticleModuleOrientationAxisLock();
};

