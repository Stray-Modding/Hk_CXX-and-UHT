#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DataDrivenConsoleVariable.h"
#include "DataDrivenConsoleVariableSettings.generated.h"

UCLASS(DefaultConfig)
class ENGINE_API UDataDrivenConsoleVariableSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FDataDrivenConsoleVariable> CVarsArray;
    
    UDataDrivenConsoleVariableSettings();
};

