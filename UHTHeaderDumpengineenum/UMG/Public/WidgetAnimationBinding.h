#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "WidgetAnimationBinding.generated.h"

USTRUCT(BlueprintType)
struct FWidgetAnimationBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName WidgetName;
    
    UPROPERTY()
    FName SlotWidgetName;
    
    UPROPERTY()
    FGuid AnimationGuid;
    
    UPROPERTY()
    bool bIsRootWidget;
    
    UMG_API FWidgetAnimationBinding();
};

