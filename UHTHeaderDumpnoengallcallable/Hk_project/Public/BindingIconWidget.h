#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BindingIconWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HK_PROJECT_API UBindingIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBindingIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSize(float _size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBindingName(const FName& _bindingName);
    
};

