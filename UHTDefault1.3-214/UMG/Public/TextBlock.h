#pragma once
#include "CoreMinimal.h"
#include "TextLayoutWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "Widget.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextTransformPolicy -FallbackName=ETextTransformPolicy
#include "TextBlock.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class UMG_API UTextBlock : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY()
    UWidget::FGetText TextDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetSlateColor ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush StrikeBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ShadowColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bWrapWithInvalidationPanel;
    
    UPROPERTY()
    bool bAutoWrapText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETextTransformPolicy TextTransformPolicy;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bSimpleTextMode;
    
public:
    UTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetStrikeBrush(FSlateBrush InStrikeBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoWrapText(bool InAutoTextWrap);
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicFontMaterial();
    
};

