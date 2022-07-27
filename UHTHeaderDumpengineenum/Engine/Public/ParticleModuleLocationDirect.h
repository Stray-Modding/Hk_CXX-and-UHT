#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleLocationDirect.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationDirect : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Location;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector ScaleFactor;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector Direction;
    
    UParticleModuleLocationDirect();
};

