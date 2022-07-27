#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BackgroundBlur.generated.h"

UCLASS()
class UMG_API UBackgroundBlur : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyAlphaToBlur;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlurStrength;
    
    UPROPERTY()
    bool bOverrideAutoRadiusCalculation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 BlurRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush LowQualityFallbackBrush;
    
    UBackgroundBlur();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurStrength(float InStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurRadius(int32 InBlurRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
    
};

