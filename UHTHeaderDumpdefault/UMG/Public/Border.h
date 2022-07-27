#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Border.generated.h"

class UTexture2D;
class UMaterialInterface;
class USlateBrushAsset;
class UMaterialInstanceDynamic;

UCLASS()
class UMG_API UBorder : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bShowEffectWhenDisabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ContentColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ContentColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Background;
    
    UPROPERTY()
    UWidget::FGetSlateBrush BackgroundDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BrushColor;
    
    UPROPERTY()
    UWidget::FGetLinearColor BrushColorDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DesiredSizeScale;
    
    UPROPERTY(EditAnywhere)
    bool bFlipForRightToLeftFlowDirection;
    
    UPROPERTY(EditAnywhere)
    UWidget::FOnPointerEvent OnMouseButtonDownEvent;
    
    UPROPERTY(EditAnywhere)
    UWidget::FOnPointerEvent OnMouseButtonUpEvent;
    
    UPROPERTY(EditAnywhere)
    UWidget::FOnPointerEvent OnMouseMoveEvent;
    
    UPROPERTY(EditAnywhere)
    UWidget::FOnPointerEvent OnMouseDoubleClickEvent;
    
    UBorder();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredSizeScale(FVector2D InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushColor(FLinearColor InBrushColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
};

