#pragma once
#include "CoreMinimal.h"
#include "Texture.h"
#include "TextureAddress.h"
#include "Texture2DArray.generated.h"

UCLASS(MinimalAPI)
class UTexture2DArray : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<TextureAddress> AddressZ;
    
    UTexture2DArray();
};

