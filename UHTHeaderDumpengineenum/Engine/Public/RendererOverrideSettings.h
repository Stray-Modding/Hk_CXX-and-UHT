#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "RendererOverrideSettings.generated.h"

UCLASS(ProjectUserConfig)
class ENGINE_API URendererOverrideSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bSupportAllShaderPermutations: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bForceRecomputeTangents: 1;
    
    URendererOverrideSettings();
};

