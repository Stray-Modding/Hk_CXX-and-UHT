#pragma once
#include "CoreMinimal.h"
#include "EParticleCameraOffsetUpdateMethod.h"
#include "ParticleModuleCameraBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleCameraOffset.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat CameraOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpawnTimeOnly: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleCameraOffsetUpdateMethod> UpdateMethod;
    
    UParticleModuleCameraOffset();
};

