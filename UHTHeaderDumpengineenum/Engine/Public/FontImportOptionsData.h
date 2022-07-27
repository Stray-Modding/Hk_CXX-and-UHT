#pragma once
#include "CoreMinimal.h"
#include "EFontImportCharacterSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "FontImportOptionsData.generated.h"

USTRUCT(BlueprintType)
struct FFontImportOptionsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString FontName;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableAntialiasing: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableBold: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableItalic: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableUnderline: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlphaOnly: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFontImportCharacterSet> CharacterSet;
    
    UPROPERTY(EditAnywhere)
    FString Chars;
    
    UPROPERTY(EditAnywhere)
    FString UnicodeRange;
    
    UPROPERTY(EditAnywhere)
    FString CharsFilePath;
    
    UPROPERTY(EditAnywhere)
    FString CharsFileWildcard;
    
    UPROPERTY(EditAnywhere)
    uint8 bCreatePrintableOnly: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIncludeASCIIRange: 1;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ForegroundColor;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableDropShadow: 1;
    
    UPROPERTY(EditAnywhere)
    int32 TexturePageWidth;
    
    UPROPERTY(EditAnywhere)
    int32 TexturePageMaxHeight;
    
    UPROPERTY(EditAnywhere)
    int32 XPadding;
    
    UPROPERTY(EditAnywhere)
    int32 YPadding;
    
    UPROPERTY(EditAnywhere)
    int32 ExtendBoxTop;
    
    UPROPERTY(EditAnywhere)
    int32 ExtendBoxBottom;
    
    UPROPERTY(EditAnywhere)
    int32 ExtendBoxRight;
    
    UPROPERTY(EditAnywhere)
    int32 ExtendBoxLeft;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableLegacyMode: 1;
    
    UPROPERTY(EditAnywhere)
    int32 Kerning;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseDistanceFieldAlpha: 1;
    
    UPROPERTY(EditAnywhere)
    int32 DistanceFieldScaleFactor;
    
    UPROPERTY(EditAnywhere)
    float DistanceFieldScanRadiusScale;
    
    ENGINE_API FFontImportOptionsData();
};

