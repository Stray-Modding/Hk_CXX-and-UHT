#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleCollisionBase.h"
#include "RawDistributionFloat.h"
#include "EParticleCollisionResponse.h"
#include "EParticleCollisionMode.h"
#include "ParticleModuleCollisionGPU.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Resilience;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat ResilienceScaleOverLife;
    
    UPROPERTY(EditAnywhere)
    float Friction;
    
    UPROPERTY(EditAnywhere)
    float RandomSpread;
    
    UPROPERTY(EditAnywhere)
    float RandomDistribution;
    
    UPROPERTY(EditAnywhere)
    float RadiusScale;
    
    UPROPERTY(EditAnywhere)
    float RadiusBias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleCollisionResponse::Type> Response;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleCollisionMode::Type> CollisionMode;
    
    UParticleModuleCollisionGPU();
};

