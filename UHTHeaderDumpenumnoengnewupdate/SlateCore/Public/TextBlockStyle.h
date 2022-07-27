#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateFontInfo.h"
#include "SlateColor.h"
#include "SlateBrush.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "TextBlockStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FTextBlockStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    FSlateColor SelectedBackgroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FLinearColor HighlightColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateBrush HighlightShape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateBrush StrikeBrush;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateBrush UnderlineBrush;
    
    FTextBlockStyle();
};

