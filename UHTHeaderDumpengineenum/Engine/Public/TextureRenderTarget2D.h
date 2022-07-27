#pragma once
#include "CoreMinimal.h"
#include "TextureFilter.h"
#include "TextureRenderTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "TextureAddress.h"
#include "ETextureRenderTargetFormat.h"
#include "TextureRenderTarget2D.generated.h"

UCLASS(MinimalAPI)
class UTextureRenderTarget2D : public UTextureRenderTarget {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    int32 SizeX;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    int32 SizeY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ClearColor;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY()
    uint8 bForceLinearGamma: 1;
    
    UPROPERTY()
    uint8 bHDR: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 bGPUSharedFlag: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 bAutoGenerateMips: 1;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<TextureFilter> MipsSamplerFilter;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<TextureAddress> MipsAddressU;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<TextureAddress> MipsAddressV;
    
    UPROPERTY()
    TEnumAsByte<EPixelFormat> OverrideFormat;
    
    UTextureRenderTarget2D();
};

