#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EProgressBarFillType -FallbackName=EProgressBarFillType
#include "Widget.h"
#include "Widget.h"
#include "ProgressBar.generated.h"

class USlateWidgetStyleAsset;
class USlateBrushAsset;

UCLASS()
class UMG_API UProgressBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProgressBarStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    USlateBrushAsset* BackgroundImage;
    
    UPROPERTY()
    USlateBrushAsset* FillImage;
    
    UPROPERTY()
    USlateBrushAsset* MarqueeImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Percent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsMarquee;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D BorderPadding;
    
    UPROPERTY()
    UWidget::FGetFloat PercentDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FillColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor FillColorAndOpacityDelegate;
    
    UProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMarquee(bool InbIsMarquee);
    
    UFUNCTION(BlueprintCallable)
    void SetFillColorAndOpacity(FLinearColor InColor);
    
};

