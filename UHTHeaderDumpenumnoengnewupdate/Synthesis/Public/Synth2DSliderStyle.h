#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Synth2DSliderStyle.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSynth2DSliderStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush NormalThumbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DisabledThumbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush NormalBarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DisabledBarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarThickness;
    
    FSynth2DSliderStyle();
};

