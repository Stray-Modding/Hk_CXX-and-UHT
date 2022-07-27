#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleAccelerationConstant.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Acceleration;
    
    UParticleModuleAccelerationConstant();
};

