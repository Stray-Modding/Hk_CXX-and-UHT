#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "HKGameMode.generated.h"

UCLASS(NonTransient)
class HK_PROJECT_API AHKGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AHKGameMode();
};

