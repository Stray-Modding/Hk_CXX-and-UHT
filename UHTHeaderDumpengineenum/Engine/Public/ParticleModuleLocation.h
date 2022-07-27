#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleLocation.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocation : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector StartLocation;
    
    UPROPERTY(EditAnywhere)
    float DistributeOverNPoints;
    
    UPROPERTY(EditAnywhere)
    float DistributeThreshold;
    
    UParticleModuleLocation();
};

