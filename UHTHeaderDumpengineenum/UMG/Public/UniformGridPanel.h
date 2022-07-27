#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "UniformGridPanel.generated.h"

class UUniformGridSlot;
class UWidget;

UCLASS()
class UMG_API UUniformGridPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin SlotPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredSlotWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredSlotHeight;
    
    UUniformGridPanel();
    UFUNCTION(BlueprintCallable)
    void SetSlotPadding(FMargin InSlotPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    
    UFUNCTION(BlueprintCallable)
    UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32 InRow, int32 InColumn);
    
};

