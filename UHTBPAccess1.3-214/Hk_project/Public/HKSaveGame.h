#pragma once
#include "CoreMinimal.h"
#include "HKLevelSaveData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "PlayerSaveData.h"
#include "HKSaveGame.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API UHKSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSaveData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHKLevelSaveData> LevelsData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PersistentData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> SessionData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterName;
    
    UPROPERTY(EditAnywhere)
    uint32 Version;
    
public:
    UHKSaveGame();
};

