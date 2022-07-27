#pragma once
#include "CoreMinimal.h"
#include "StreamableRenderAsset.h"
#include "ETextureMipLoadOptions.h"
#include "Interface_AssetUserData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "TextureFilter.h"
#include "TextureCompressionSettings.h"
#include "TextureGroup.h"
#include "PerPlatformFloat.h"
#include "ETextureDownscaleOptions.h"
#include "Texture.generated.h"

class UAssetUserData;

UCLASS(Abstract, MinimalAPI)
class UTexture : public UStreamableRenderAsset, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid LightingGuid;
    
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    int32 LODBias;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureCompressionSettings> CompressionSettings;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureFilter> Filter;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    ETextureMipLoadOptions MipLoadOptions;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureGroup> LODGroup;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FPerPlatformFloat Downscale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ETextureDownscaleOptions DownscaleOptions;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    uint8 sRGB: 1;
    
    UPROPERTY()
    uint8 bNoTiling: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 VirtualTextureStreaming: 1;
    
    UPROPERTY()
    uint8 CompressionYCoCg: 1;
    
    UPROPERTY(Transient)
    uint8 bNotOfflineProcessed: 1;
    
private:
    UPROPERTY(Transient)
    uint8 bAsyncResourceReleaseHasBeenStarted: 1;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UTexture();
    
    // Fix for true pure virtual functions not being implemented
};

