#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "PIELoginSettingsInternal.h"
#include "OnlinePIESettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class UOnlinePIESettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bOnlinePIEEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPIELoginSettingsInternal> Logins;
    
    UOnlinePIESettings();
};

