#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputSubsystemSettings.generated.h"

UCLASS(Abstract)
class UInputSubsystemSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FKey, FKey> QwertyToAzerty;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FKey, FKey> QwertyToQwertz;
    
    UInputSubsystemSettings();
};

