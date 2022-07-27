#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "MenuGameMode.generated.h"

UCLASS(NonTransient)
class HK_PROJECT_API AMenuGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AMenuGameMode();
};

