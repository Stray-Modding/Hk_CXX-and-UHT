#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BrushBinding.generated.h"

UCLASS()
class UMG_API UBrushBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UBrushBinding();
    UFUNCTION()
    FSlateBrush GetValue() const;
    
};

