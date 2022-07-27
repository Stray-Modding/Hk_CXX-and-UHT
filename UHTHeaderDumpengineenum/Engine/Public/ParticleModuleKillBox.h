#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleKillBase.h"
#include "RawDistributionVector.h"
#include "ParticleModuleKillBox.generated.h"

UCLASS(EditInlineNew)
class UParticleModuleKillBox : public UParticleModuleKillBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector LowerLeftCorner;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector UpperRightCorner;
    
    UPROPERTY(EditAnywhere)
    uint8 bAbsolute: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bKillInside: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAxisAlignedAndFixedSize: 1;
    
    UParticleModuleKillBox();
};

