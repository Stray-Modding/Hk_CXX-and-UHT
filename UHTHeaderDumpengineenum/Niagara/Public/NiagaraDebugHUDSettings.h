#pragma once
#include "CoreMinimal.h"
#include "NiagaraDebugHUDSettingsData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraDebugHUDSettings.generated.h"

UCLASS(DefaultConfig, Config=EditorPerProjectUserSettings)
class NIAGARA_API UNiagaraDebugHUDSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FNiagaraDebugHUDSettingsData Data;
    
    UNiagaraDebugHUDSettings();
};

