#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SoundSubmixBase.h"
#include "SoundfieldEndpointSubmix.generated.h"

class USoundfieldEncodingSettingsBase;
class UAudioEndpointSettingsBase;
class USoundfieldEndpointSettingsBase;
class USoundfieldEffectBase;

UCLASS(EditInlineNew)
class ENGINE_API USoundfieldEndpointSubmix : public USoundSubmixBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName SoundfieldEndpointType;
    
    UPROPERTY()
    TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;
    
    UPROPERTY(EditAnywhere)
    USoundfieldEndpointSettingsBase* EndpointSettings;
    
    UPROPERTY()
    TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;
    
    UPROPERTY(EditAnywhere)
    USoundfieldEncodingSettingsBase* EncodingSettings;
    
    UPROPERTY(EditAnywhere)
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain;
    
    USoundfieldEndpointSubmix();
};

