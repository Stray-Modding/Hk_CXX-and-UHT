#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "Texture.h"
#include "TextureAddress.h"
#include "Texture2D.generated.h"

UCLASS(MinimalAPI)
class UTexture2D : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 LevelIndex;
    
    UPROPERTY()
    int32 FirstResourceMemMip;
    
private:
    UPROPERTY(Transient)
    uint8 bTemporarilyDisableStreaming: 1;
    
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
private:
    UPROPERTY()
    FIntPoint ImportedSize;
    
public:
    UTexture2D();
    UFUNCTION(BlueprintPure)
    int32 Blueprint_GetSizeY() const;
    
    UFUNCTION(BlueprintPure)
    int32 Blueprint_GetSizeX() const;
    
};

