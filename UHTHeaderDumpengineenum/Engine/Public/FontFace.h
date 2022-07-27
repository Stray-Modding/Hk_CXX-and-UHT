#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFontHinting -FallbackName=EFontHinting
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=FontFaceInterface -FallbackName=FontFaceInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFontLayoutMethod -FallbackName=EFontLayoutMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFontLoadingPolicy -FallbackName=EFontLoadingPolicy
#include "FontFace.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UFontFace : public UObject, public IFontFaceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SourceFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFontHinting Hinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFontLoadingPolicy LoadingPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    EFontLayoutMethod LayoutMethod;
    
    UFontFace();
    
    // Fix for true pure virtual functions not being implemented
};

