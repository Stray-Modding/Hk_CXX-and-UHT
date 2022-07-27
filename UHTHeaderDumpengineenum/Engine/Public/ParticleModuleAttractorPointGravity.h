#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAttractorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RawDistributionFloat.h"
#include "ParticleModuleAttractorPointGravity.generated.h"

class UDistributionFloat;

UCLASS(EditInlineNew)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(Export)
    UDistributionFloat* Strength;
    
    UPROPERTY(EditAnywhere, NoClear)
    FRawDistributionFloat StrengthRaw;
    
    UParticleModuleAttractorPointGravity();
};

