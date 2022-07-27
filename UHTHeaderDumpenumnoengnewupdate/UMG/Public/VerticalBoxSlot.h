#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "PanelSlot.h"
#include "SlateChildSize.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
#include "VerticalBoxSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UVerticalBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UVerticalBoxSlot();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FSlateChildSize InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
};

