#pragma once
#include "CoreMinimal.h"
#include "TextureCompressionSettings.h"
#include "TextureFormatSettings.generated.h"

USTRUCT()
struct FTextureFormatSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<TextureCompressionSettings> CompressionSettings;
    
    UPROPERTY()
    uint8 CompressionNoAlpha: 1;
    
    UPROPERTY()
    uint8 CompressionNone: 1;
    
    UPROPERTY()
    uint8 CompressionYCoCg: 1;
    
    UPROPERTY()
    uint8 sRGB: 1;
    
    ENGINE_API FTextureFormatSettings();
};

