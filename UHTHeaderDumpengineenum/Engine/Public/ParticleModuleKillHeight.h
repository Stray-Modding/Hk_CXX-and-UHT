#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleKillBase.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleKillHeight.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleKillHeight : public UParticleModuleKillBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Height;
    
    UPROPERTY(EditAnywhere)
    uint8 bAbsolute: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFloor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyPSysScale: 1;
    
    UParticleModuleKillHeight();
};

