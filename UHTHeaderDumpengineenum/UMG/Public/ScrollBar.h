#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ScrollBarStyle -FallbackName=ScrollBarStyle
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "ScrollBar.generated.h"

class USlateWidgetStyleAsset;

UCLASS()
class UMG_API UScrollBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FScrollBarStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysShowScrollbar;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysShowScrollbarTrack;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(EditAnywhere)
    FVector2D Thickness;
    
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UScrollBar();
    UFUNCTION(BlueprintCallable)
    void SetState(float InOffsetFraction, float InThumbSizeFraction);
    
};

