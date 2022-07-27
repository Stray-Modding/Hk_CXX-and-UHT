#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "HKGlobalSaveGame.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKGlobalSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastUsedSlot;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> GameUserSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Culture;
    
    UHKGlobalSaveGame();
};

