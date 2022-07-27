#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CheckBoxStyle -FallbackName=CheckBoxStyle
#include "CheckBoxStyleAsset.generated.h"

UCLASS(MinimalAPI)
class UCheckBoxStyleAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCheckBoxStyle CheckBoxStyle;
    
    UCheckBoxStyleAsset();
};

