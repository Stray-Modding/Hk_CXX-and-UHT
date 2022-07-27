#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ContentWidget.h"
#include "OnMenuOpenChangedEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EMenuPlacement -FallbackName=EMenuPlacement
#include "MenuAnchor.generated.h"

class UUserWidget;

UCLASS()
class UMG_API UMenuAnchor : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(UUserWidget*, FGetUserWidget);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> MenuClass;
    
    UPROPERTY(EditAnywhere)
    UWidget::FGetWidget OnGetMenuContentEvent;
    
    UPROPERTY(EditAnywhere)
    FGetUserWidget OnGetUserMenuContentEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMenuPlacement> Placement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFitInWindow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ShouldDeferPaintingAfterWindowContent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool UseApplicationMenuStack;
    
    UPROPERTY(BlueprintAssignable)
    FOnMenuOpenChangedEvent OnMenuOpenChanged;
    
    UMenuAnchor();
    UFUNCTION(BlueprintCallable)
    void ToggleOpen(bool bFocusOnOpen);
    
    UFUNCTION(BlueprintPure)
    bool ShouldOpenDueToClick() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bFocusMenu);
    
    UFUNCTION(BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintPure)
    bool HasOpenSubMenus() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetMenuPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void FitInWindow(bool bFit);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

