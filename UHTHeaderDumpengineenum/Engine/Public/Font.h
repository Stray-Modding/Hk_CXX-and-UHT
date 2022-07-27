#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CompositeFont -FallbackName=CompositeFont
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=FontProviderInterface -FallbackName=FontProviderInterface
#include "EFontCacheType.h"
#include "FontCharacter.h"
#include "FontImportOptionsData.h"
#include "Font.generated.h"

class UTexture2D;

UCLASS(MinimalAPI)
class UFont : public UObject, public IFontProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFontCacheType FontCacheType;
    
    UPROPERTY(EditAnywhere)
    TArray<FFontCharacter> Characters;
    
    UPROPERTY()
    TArray<UTexture2D*> Textures;
    
    UPROPERTY()
    int32 IsRemapped;
    
    UPROPERTY(EditAnywhere)
    float EmScale;
    
    UPROPERTY(EditAnywhere)
    float Ascent;
    
    UPROPERTY(EditAnywhere)
    float Descent;
    
    UPROPERTY(EditAnywhere)
    float Leading;
    
    UPROPERTY(EditAnywhere)
    int32 Kerning;
    
    UPROPERTY(EditAnywhere)
    FFontImportOptionsData ImportOptions;
    
    UPROPERTY(Transient)
    int32 NumCharacters;
    
    UPROPERTY(Transient)
    TArray<int32> MaxCharHeight;
    
    UPROPERTY(EditAnywhere)
    float ScalingFactor;
    
    UPROPERTY(EditAnywhere)
    int32 LegacyFontSize;
    
    UPROPERTY(EditAnywhere)
    FName LegacyFontName;
    
    UPROPERTY()
    FCompositeFont CompositeFont;
    
    UFont();
    
    // Fix for true pure virtual functions not being implemented
};

