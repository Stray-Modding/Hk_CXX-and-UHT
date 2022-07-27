#pragma once
#include "CoreMinimal.h"
#include "GPUSpriteResourceData.h"
#include "ParticleModuleTypeDataBase.h"
#include "GPUSpriteEmitterInfo.h"
#include "ParticleModuleTypeDataGpu.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGPUSpriteEmitterInfo EmitterInfo;
    
    UPROPERTY()
    FGPUSpriteResourceData ResourceData;
    
    UPROPERTY(EditAnywhere)
    float CameraMotionBlurAmount;
    
    UPROPERTY(EditAnywhere)
    uint8 bClearExistingParticlesOnInit: 1;
    
    UParticleModuleTypeDataGpu();
};

