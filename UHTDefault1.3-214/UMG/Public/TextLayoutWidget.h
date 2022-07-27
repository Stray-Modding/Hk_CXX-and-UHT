#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "ShapedTextOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextWrappingPolicy -FallbackName=ETextWrappingPolicy
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "TextLayoutWidget.generated.h"

UCLASS(Abstract)
class UMG_API UTextLayoutWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FShapedTextOptions ShapedTextOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextWrappingPolicy WrappingPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 AutoWrapText: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapTextAt;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LineHeightPercentage;
    
public:
    UTextLayoutWidget();
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
};

