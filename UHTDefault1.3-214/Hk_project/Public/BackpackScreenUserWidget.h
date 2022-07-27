#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BackpackScreenUserWidget.generated.h"

class ABackpack;

UCLASS(EditInlineNew)
class HK_PROJECT_API UBackpackScreenUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBackpackScreenUserWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void OnBackpackSet();
    
    UFUNCTION(BlueprintPure)
    ABackpack* GetBackpack() const;
    
};
