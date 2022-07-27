#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
#include "ButtonStyleAsset.generated.h"

UCLASS(MinimalAPI)
class UButtonStyleAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FButtonStyle ButtonStyle;
    
    UButtonStyleAsset();
};

