#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "HKGlobalSaveGame.generated.h"

UCLASS()
class HK_PROJECT_API UHKGlobalSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LastUsedSlot;
    
    UPROPERTY()
    TArray<uint8> GameUserSettingsData;
    
    UPROPERTY()
    FString Culture;
    
    UHKGlobalSaveGame();
};

