#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "ButtonStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SlateBrush.h"
#include "Margin.h"
#include "ComboButtonStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FComboButtonStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle ButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DownArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MenuBorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin MenuBorderPadding;
    
    FComboButtonStyle();
};

