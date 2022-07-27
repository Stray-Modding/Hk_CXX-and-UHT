#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Widget.h"
#include "ComboBox.generated.h"

class UObject;

UCLASS()
class UMG_API UComboBox : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> Items;
    
    UPROPERTY(EditAnywhere)
    UWidget::FGenerateWidgetForObject OnGenerateWidgetEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFocusable;
    
    UComboBox();
};

