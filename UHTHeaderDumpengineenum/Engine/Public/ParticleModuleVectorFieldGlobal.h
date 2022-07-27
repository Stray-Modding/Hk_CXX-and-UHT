#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
#include "ParticleModuleVectorFieldGlobal.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideGlobalVectorFieldTightness: 1;
    
    UPROPERTY(EditAnywhere)
    float GlobalVectorFieldScale;
    
    UPROPERTY(EditAnywhere)
    float GlobalVectorFieldTightness;
    
    UParticleModuleVectorFieldGlobal();
};

