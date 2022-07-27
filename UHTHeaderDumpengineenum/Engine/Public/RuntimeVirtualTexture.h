#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureMaterialType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TextureGroup.h"
#include "RuntimeVirtualTexture.generated.h"

class URuntimeVirtualTextureStreamingProxy;

UCLASS(BlueprintType)
class ENGINE_API URuntimeVirtualTexture : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TileCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TileSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TileBorderSize;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    ERuntimeVirtualTextureMaterialType MaterialType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCompressTextures;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bClearTextures;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bSinglePhysicalSpace;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bPrivateSpace;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAdaptive;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bContinuousUpdate;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 RemoveLowMips;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureGroup> LODGroup;
    
    UPROPERTY()
    int32 Size;
    
    UPROPERTY()
    URuntimeVirtualTextureStreamingProxy* StreamingTexture;
    
public:
    URuntimeVirtualTexture();
    UFUNCTION(BlueprintPure)
    int32 GetTileSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTileCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTileBorderSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPageTableSize() const;
    
};

