#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdManager -FallbackName=CrowdManager
#include "HKCrowdManager.generated.h"

UCLASS(NonTransient)
class HK_PROJECT_API UHKCrowdManager : public UCrowdManager {
    GENERATED_BODY()
public:
    UHKCrowdManager();
};

