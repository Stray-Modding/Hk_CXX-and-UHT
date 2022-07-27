#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESlateAccessibleBehavior.h"
#include "SlateAccessibleWidgetData.generated.h"

UCLASS(DefaultToInstanced)
class USlateAccessibleWidgetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCanChildrenBeAccessible;
    
    UPROPERTY()
    ESlateAccessibleBehavior AccessibleBehavior;
    
    UPROPERTY()
    ESlateAccessibleBehavior AccessibleSummaryBehavior;
    
    UPROPERTY()
    FText AccessibleText;
    
    UPROPERTY()
    FGetText AccessibleTextDelegate;
    
    UPROPERTY()
    FText AccessibleSummaryText;
    
    UPROPERTY()
    FGetText AccessibleSummaryTextDelegate;
    
    USlateAccessibleWidgetData();
};

