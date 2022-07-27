#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "LandscapeComponentMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLandscapeComponentMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformInt LODIndex;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    LANDSCAPE_API FLandscapeComponentMaterialOverride();
};

