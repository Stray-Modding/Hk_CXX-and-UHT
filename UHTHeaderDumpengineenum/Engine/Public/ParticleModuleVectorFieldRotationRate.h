#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleVectorFieldRotationRate.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector RotationRate;
    
    UParticleModuleVectorFieldRotationRate();
};

