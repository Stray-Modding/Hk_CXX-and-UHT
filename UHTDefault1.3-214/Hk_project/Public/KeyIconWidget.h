#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyIconWidget.generated.h"

UCLASS(EditInlineNew)
class HK_PROJECT_API UKeyIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKeyIconWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetKey(const FKey& _key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsSelected(bool _isSelected);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsKeyboardColumnHidden() const;
    
};

