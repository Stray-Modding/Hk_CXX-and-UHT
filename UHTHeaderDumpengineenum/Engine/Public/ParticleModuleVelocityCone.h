#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVelocityBase.h"
#include "RawDistributionFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleVelocityCone.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Angle;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Velocity;
    
    UPROPERTY(EditAnywhere)
    FVector Direction;
    
    UParticleModuleVelocityCone();
};

