#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HKModuleDelegateHelper.generated.h"

class ANavigationData;

UCLASS(Blueprintable, Transient)
class HK_PROJECT_API UHKModuleDelegateHelper : public UObject {
    GENERATED_BODY()
public:
    UHKModuleDelegateHelper();
    UFUNCTION(BlueprintCallable)
    void _OnNavDataRegisteredEvent(ANavigationData* NavData);
    
};

