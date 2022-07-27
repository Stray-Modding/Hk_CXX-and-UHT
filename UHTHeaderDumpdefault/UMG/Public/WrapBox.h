#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "WrapBox.generated.h"

class UWrapBoxSlot;
class UWidget;

UCLASS()
class UMG_API UWrapBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D InnerSlotPadding;
    
    UPROPERTY()
    float WrapWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapSize;
    
    UPROPERTY()
    bool bExplicitWrapWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExplicitWrapSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UWrapBox();
    UFUNCTION(BlueprintCallable)
    void SetInnerSlotPadding(FVector2D InPadding);
    
    UFUNCTION(BlueprintCallable)
    UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
    
};

