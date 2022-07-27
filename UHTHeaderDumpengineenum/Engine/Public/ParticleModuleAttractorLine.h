#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleAttractorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RawDistributionFloat.h"
#include "ParticleModuleAttractorLine.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector EndPoint0;
    
    UPROPERTY(EditAnywhere)
    FVector EndPoint1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Range;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Strength;
    
    UParticleModuleAttractorLine();
};

