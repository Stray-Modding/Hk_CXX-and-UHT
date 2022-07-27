#pragma once
#include "CoreMinimal.h"
#include "MediaTextureOrientation.h"
#include "MediaTextureOutputFormat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Texture -FallbackName=Texture
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MediaTexture.generated.h"

class UMediaPlayer;

UCLASS()
class MEDIAASSETS_API UMediaTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ClearColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableGenMips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 NumMips;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NewStyleOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<MediaTextureOutputFormat> OutputFormat;
    
    UPROPERTY(BlueprintReadOnly, SkipSerialization, TextExportTransient, Transient)
    float CurrentAspectRatio;
    
    UPROPERTY(BlueprintReadOnly, SkipSerialization, TextExportTransient, Transient)
    TEnumAsByte<MediaTextureOrientation> CurrentOrientation;
    
protected:
    UPROPERTY(EditAnywhere)
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaTexture();
    UFUNCTION(BlueprintCallable)
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    
    UFUNCTION(BlueprintPure)
    int32 GetWidth() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTextureNumMips() const;
    
    UFUNCTION(BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetAspectRatio() const;
    
};

