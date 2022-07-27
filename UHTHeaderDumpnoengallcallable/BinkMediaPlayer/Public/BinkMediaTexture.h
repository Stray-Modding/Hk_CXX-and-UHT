#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Texture -FallbackName=Texture
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
#include "BinkMediaTexture.generated.h"

class UBinkMediaPlayer;

UCLASS(Blueprintable)
class BINKMEDIAPLAYER_API UBinkMediaTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPixelFormat> PixelFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool tonemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutputNits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DecodeSRGB;
    
    UBinkMediaTexture();
    UFUNCTION(BlueprintCallable)
    void SetMediaPlayer(UBinkMediaPlayer* InMediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

