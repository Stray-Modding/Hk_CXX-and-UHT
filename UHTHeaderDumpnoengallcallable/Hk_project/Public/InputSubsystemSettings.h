#pragma once
#include "CoreMinimal.h"
#include "HKSubsystemSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputSubsystemSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class UInputSubsystemSettings : public UHKSubsystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FKey> QwertyToAzerty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FKey> QwertyToQwertz;
    
    UInputSubsystemSettings();
};

