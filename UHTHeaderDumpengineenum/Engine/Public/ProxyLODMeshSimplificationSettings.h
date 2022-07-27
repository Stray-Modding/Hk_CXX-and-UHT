#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ProxyLODMeshSimplificationSettings.generated.h"

UCLASS(DefaultConfig)
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FName ProxyLODMeshReductionModuleName;
    
    UProxyLODMeshSimplificationSettings();
};

