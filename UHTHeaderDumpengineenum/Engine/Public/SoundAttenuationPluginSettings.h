#pragma once
#include "CoreMinimal.h"
#include "SoundAttenuationPluginSettings.generated.h"

class USpatializationPluginSourceSettingsBase;
class UOcclusionPluginSourceSettingsBase;
class UReverbPluginSourceSettingsBase;

USTRUCT(BlueprintType)
struct ENGINE_API FSoundAttenuationPluginSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;
    
    FSoundAttenuationPluginSettings();
};

