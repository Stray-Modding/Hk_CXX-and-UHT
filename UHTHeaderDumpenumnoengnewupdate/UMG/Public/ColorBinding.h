#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ColorBinding.generated.h"

UCLASS()
class UMG_API UColorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UColorBinding();
    UFUNCTION()
    FSlateColor GetSlateValue() const;
    
    UFUNCTION()
    FLinearColor GetLinearValue() const;
    
};

