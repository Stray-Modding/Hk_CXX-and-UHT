#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "ESlateVisibility.h"
#include "InputKeySelector.generated.h"

UCLASS()
class UMG_API UInputKeySelector : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeySelected, FInputChord, SelectedKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIsSelectingKeyChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly)
    FInputChord SelectedKey;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY()
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText KeySelectionText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NoKeySpecifiedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowModifierKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowGamepadKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> EscapeKeys;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeySelected OnKeySelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsSelectingKeyChanged OnIsSelectingKeyChanged;
    
    UInputKeySelector();
    UFUNCTION(BlueprintCallable)
    void SetTextBlockVisibility(const ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedKey(const FInputChord& InSelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);
    
    UFUNCTION(BlueprintCallable)
    void SetKeySelectionText(FText InKeySelectionText);
    
    UFUNCTION(BlueprintCallable)
    void SetEscapeKeys(const TArray<FKey>& InKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    
    UFUNCTION(BlueprintPure)
    bool GetIsSelectingKey() const;
    
};

