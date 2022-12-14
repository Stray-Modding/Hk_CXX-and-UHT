#pragma once
#include "CoreMinimal.h"
#include "SaveSlotCache.generated.h"

class UHKSaveGame;

USTRUCT(BlueprintType)
struct FSaveSlotCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKSaveGame* SaveGame;
    
    HK_PROJECT_API FSaveSlotCache();
};

