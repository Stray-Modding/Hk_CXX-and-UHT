#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleParameterBase.h"
#include "EmitterDynamicParameter.h"
#include "ParticleModuleParameterDynamic.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FEmitterDynamicParameter> DynamicParams;
    
    UPROPERTY()
    int32 UpdateFlags;
    
    UPROPERTY()
    uint8 bUsesVelocity: 1;
    
    UParticleModuleParameterDynamic();
};

