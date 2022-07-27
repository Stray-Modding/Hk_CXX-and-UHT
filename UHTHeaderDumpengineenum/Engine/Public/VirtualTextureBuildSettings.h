#pragma once
#include "CoreMinimal.h"
#include "VirtualTextureBuildSettings.generated.h"

USTRUCT(BlueprintType)
struct FVirtualTextureBuildSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TileSize;
    
    UPROPERTY()
    int32 TileBorderSize;
    
    UPROPERTY()
    bool bEnableCompressCrunch;
    
    UPROPERTY()
    bool bEnableCompressZlib;
    
    ENGINE_API FVirtualTextureBuildSettings();
};

