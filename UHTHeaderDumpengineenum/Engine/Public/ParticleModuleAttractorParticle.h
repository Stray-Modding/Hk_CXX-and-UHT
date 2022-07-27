#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAttractorBase.h"
#include "RawDistributionFloat.h"
#include "EAttractorParticleSelectionMethod.h"
#include "ParticleModuleAttractorParticle.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    FName EmitterName;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Range;
    
    UPROPERTY(EditAnywhere)
    uint8 bStrengthByDistance: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Strength;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectBaseVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAttractorParticleSelectionMethod> SelectionMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 bRenewSource: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritSourceVel: 1;
    
    UPROPERTY()
    int32 LastSelIndex;
    
    UParticleModuleAttractorParticle();
};

