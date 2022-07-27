#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "MeshSimplificationSettings.generated.h"

UCLASS(DefaultConfig)
class UMeshSimplificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FName MeshReductionModuleName;
    
    UMeshSimplificationSettings();
};

