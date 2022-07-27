#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "HKCheatManager.generated.h"

UCLASS(Blueprintable)
class UHKCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UHKCheatManager();
};

