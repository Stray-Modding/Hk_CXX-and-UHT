#pragma once
#include "CoreMinimal.h"
#include "TextureGroup.h"
#include "TextureMipGenSettings.h"
#include "ETextureLossyCompressionAmount.h"
#include "ETextureDownscaleOptions.h"
#include "ETextureMipLoadOptions.h"
#include "TextureLODGroup.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTextureLODGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<TextureGroup> Group;
    
    UPROPERTY()
    int32 LODBias;
    
    UPROPERTY()
    int32 LODBias_Smaller;
    
    UPROPERTY()
    int32 LODBias_Smallest;
    
    UPROPERTY()
    int32 NumStreamedMips;
    
    UPROPERTY()
    TEnumAsByte<TextureMipGenSettings> MipGenSettings;
    
    UPROPERTY()
    int32 MinLODSize;
    
    UPROPERTY()
    int32 MaxLODSize;
    
    UPROPERTY()
    int32 MaxLODSize_Smaller;
    
    UPROPERTY()
    int32 MaxLODSize_Smallest;
    
    UPROPERTY()
    int32 OptionalLODBias;
    
    UPROPERTY()
    int32 OptionalMaxLODSize;
    
    UPROPERTY()
    FName MinMagFilter;
    
    UPROPERTY()
    FName MipFilter;
    
    UPROPERTY()
    ETextureMipLoadOptions MipLoadOptions;
    
    UPROPERTY()
    bool HighPriorityLoad;
    
    UPROPERTY()
    bool DuplicateNonOptionalMips;
    
    UPROPERTY()
    float Downscale;
    
    UPROPERTY()
    ETextureDownscaleOptions DownscaleOptions;
    
    UPROPERTY()
    int32 VirtualTextureTileCountBias;
    
    UPROPERTY()
    int32 VirtualTextureTileSizeBias;
    
    UPROPERTY()
    TEnumAsByte<ETextureLossyCompressionAmount> LossyCompressionAmount;
    
    FTextureLODGroup();
};

