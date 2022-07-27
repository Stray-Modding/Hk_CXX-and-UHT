#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleCollisionBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "EParticleCollisionComplete.h"
#include "EObjectTypeQuery.h"
#include "ParticleModuleCollision.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleCollision : public UParticleModuleCollisionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector DampingFactor;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector DampingFactorRotation;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat MaxCollisions;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleCollisionComplete> CollisionCompletionOption;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> CollisionTypes;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyPhysics: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreTriggerVolumes: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat ParticleMass;
    
    UPROPERTY(EditAnywhere)
    float DirScalar;
    
    UPROPERTY(EditAnywhere)
    uint8 bPawnsDoNotDecrementCount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOnlyVerticalNormalsDecrementCount: 1;
    
    UPROPERTY(EditAnywhere)
    float VerticalFudgeFactor;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat DelayAmount;
    
    UPROPERTY(EditAnywhere)
    uint8 bDropDetail: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCollideOnlyIfVisible: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreSourceActor: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxCollisionDistance;
    
    UParticleModuleCollision();
};

