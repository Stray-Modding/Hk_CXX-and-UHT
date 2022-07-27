#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAttractorBase.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleAttractorPoint.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Position;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Range;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Strength;
    
    UPROPERTY(EditAnywhere)
    uint8 StrengthByDistance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectBaseVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseWorldSpacePosition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Positive_X: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Positive_Y: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Positive_Z: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Negative_X: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Negative_Y: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 Negative_Z: 1;
    
    UParticleModuleAttractorPoint();
};

