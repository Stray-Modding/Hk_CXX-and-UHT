#pragma once
#include "CoreMinimal.h"
#include "TextureRenderTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "TextureRenderTargetVolume.generated.h"

UCLASS(MinimalAPI)
class UTextureRenderTargetVolume : public UTextureRenderTarget {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    int32 SizeX;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    int32 SizeY;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    int32 SizeZ;
    
    UPROPERTY()
    FLinearColor ClearColor;
    
    UPROPERTY()
    TEnumAsByte<EPixelFormat> OverrideFormat;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 bHDR: 1;
    
    UPROPERTY()
    uint8 bForceLinearGamma: 1;
    
    UTextureRenderTargetVolume();
};

