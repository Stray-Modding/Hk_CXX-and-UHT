#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "DebugProfile.h"
#include "DebugSaveGame.generated.h"

UCLASS()
class HK_PROJECT_API UDebugSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bDebugProfileEnabled;
    
    UPROPERTY()
    FDebugProfile DebugProfile;
    
    UDebugSaveGame();
};

