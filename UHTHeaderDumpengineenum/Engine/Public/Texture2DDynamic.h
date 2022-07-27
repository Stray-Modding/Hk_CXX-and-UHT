#pragma once
#include "CoreMinimal.h"
#include "Texture.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
#include "Texture2DDynamic.generated.h"

UCLASS(MinimalAPI)
class UTexture2DDynamic : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TEnumAsByte<EPixelFormat> Format;
    
    UTexture2DDynamic();
};

