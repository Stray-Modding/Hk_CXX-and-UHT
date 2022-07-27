#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HKSubsystemSettings.generated.h"

UCLASS(Abstract, Const)
class UHKSubsystemSettings : public UObject {
    GENERATED_BODY()
public:
    UHKSubsystemSettings();
};

