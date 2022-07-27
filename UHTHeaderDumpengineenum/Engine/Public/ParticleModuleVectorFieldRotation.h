#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleVectorFieldRotation.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector MinInitialRotation;
    
    UPROPERTY(EditAnywhere)
    FVector MaxInitialRotation;
    
    UParticleModuleVectorFieldRotation();
};

