#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraEmitterNameSettingsRef.h"
#include "NiagaraComponentSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class NIAGARA_API UNiagaraComponentSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TSet<FName> SuppressActivationList;
    
    UPROPERTY(Config)
    TSet<FName> ForceAutoPooolingList;
    
    UPROPERTY(Config)
    TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList;
    
    UNiagaraComponentSettings();
};

