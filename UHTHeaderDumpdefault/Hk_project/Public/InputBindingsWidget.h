#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
#include "InputBindingsWidget.generated.h"

class UInputKeyRowWidget;
class UScrollBox;
class UVerticalBox;
class UHorizontalBox;
class UHKButton;
class USoundBase;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputBindingsWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UScrollBox* ScrollBox;
    
    UPROPERTY(Export)
    UVerticalBox* InputKeyRowVBox;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowForward;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowBack;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowLeft;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowRight;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowRun;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowJump;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowInteract;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowMeow;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowCall;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowMenu;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowLight;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowDefluxor;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowHelp;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowFirstPerson;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowRecenter;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowValidate;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowExit;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowNextDialog;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowPrevCategory;
    
    UPROPERTY(Export)
    UInputKeyRowWidget* InputRowNextCategory;
    
    UPROPERTY(Export)
    UHorizontalBox* KeyBox;
    
    UPROPERTY(Export)
    UHorizontalBox* CancelKeyBox;
    
    UPROPERTY(Export)
    UHKButton* BackButton;
    
    UPROPERTY(Export)
    UHKButton* DefaultsButton;
    
    UPROPERTY(Export)
    UHKButton* CancelButton;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onKeyRowSelectedSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onKeyRowListeningStartSound;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onKeyRowListeningConfirmSound;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_applyBindingsDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_resetToDefaultsDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_invalidKeyDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_clearInputDialogText;
    
    UPROPERTY(EditDefaultsOnly)
    float m_onListeningOtherKeyOpacity;
    
public:
    UInputBindingsWidget();
};

