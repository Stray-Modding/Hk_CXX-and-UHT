#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerInput -FallbackName=PlayerInput
#include "HKPlayerInput.generated.h"

UCLASS(NonTransient)
class HK_PROJECT_API UHKPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    UHKPlayerInput();
};

