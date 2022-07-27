#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "HKCheatManager.generated.h"

UCLASS()
class UHKCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UHKCheatManager();
};

