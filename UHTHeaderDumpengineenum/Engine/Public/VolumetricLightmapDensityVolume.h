#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "VolumetricLightmapDensityVolume.generated.h"

UCLASS(MinimalAPI)
class AVolumetricLightmapDensityVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInt32Interval AllowedMipLevelRange;
    
    AVolumetricLightmapDensityVolume();
};

