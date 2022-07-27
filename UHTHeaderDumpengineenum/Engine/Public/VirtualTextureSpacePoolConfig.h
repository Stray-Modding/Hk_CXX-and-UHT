#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
#include "VirtualTextureSpacePoolConfig.generated.h"

USTRUCT(BlueprintType)
struct FVirtualTextureSpacePoolConfig {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MinTileSize;
    
    UPROPERTY()
    int32 MaxTileSize;
    
    UPROPERTY()
    TArray<TEnumAsByte<EPixelFormat>> Formats;
    
    UPROPERTY()
    int32 SizeInMegabyte;
    
    UPROPERTY()
    bool bAllowSizeScale;
    
    UPROPERTY()
    uint32 ScalabilityGroup;
    
    ENGINE_API FVirtualTextureSpacePoolConfig();
};

