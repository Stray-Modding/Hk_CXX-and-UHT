#pragma once
#include "CoreMinimal.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleSubUVBase.h"
#include "ParticleModuleSubUV.generated.h"

class USubUVAnimation;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSubUV : public UParticleModuleSubUVBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    USubUVAnimation* Animation;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat SubImageIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseRealTime: 1;
    
    UParticleModuleSubUV();
};

