#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigationRule -FallbackName=EUINavigationRule
#include "CustomWidgetNavigationDelegateDelegate.h"
#include "WidgetNavigationData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct UMG_API FWidgetNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUINavigationRule Rule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WidgetToFocus;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UWidget> Widget;
    
    UPROPERTY()
    FCustomWidgetNavigationDelegate CustomDelegate;
    
    FWidgetNavigationData();
};

