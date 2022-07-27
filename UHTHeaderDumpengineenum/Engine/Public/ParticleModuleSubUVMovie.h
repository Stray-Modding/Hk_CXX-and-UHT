#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleSubUV.h"
#include "RawDistributionFloat.h"
#include "ParticleModuleSubUVMovie.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseEmitterTime: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat FrameRate;
    
    UPROPERTY(EditAnywhere)
    int32 StartingFrame;
    
    UParticleModuleSubUVMovie();
};

