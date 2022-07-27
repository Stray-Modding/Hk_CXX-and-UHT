#pragma once
#include "CoreMinimal.h"
#include "HKUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputSelectorWidget.generated.h"

class USoundBase;
class UHKTextBlock;
class UHKButton;
class UKeyIconWidget;

UCLASS(EditInlineNew)
class HK_PROJECT_API UInputSelectorWidget : public UHKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_onListeningCancelSound;
    
    UPROPERTY(Export)
    UHKButton* Button;
    
    UPROPERTY(Export)
    UHKTextBlock* Text;
    
    UPROPERTY(Export)
    UKeyIconWidget* KeyIcon;
    
    UPROPERTY(EditDefaultsOnly)
    FText m_waitingText;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<FKey> m_escapeKeys;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_onListeningTextColor;
    
public:
    UInputSelectorWidget();
};

