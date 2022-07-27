#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
#include "GridSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UGridSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Row;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RowSpan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Column;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ColumnSpan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Layer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Nudge;
    
    UGridSlot();
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetRowSpan(int32 InRowSpan);
    
    UFUNCTION(BlueprintCallable)
    void SetRow(int32 InRow);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetNudge(FVector2D InNudge);
    
    UFUNCTION(BlueprintCallable)
    void SetLayer(int32 InLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnSpan(int32 InColumnSpan);
    
    UFUNCTION(BlueprintCallable)
    void SetColumn(int32 InColumn);
    
};

