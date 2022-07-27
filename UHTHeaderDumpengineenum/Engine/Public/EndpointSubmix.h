#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SoundSubmixBase.h"
#include "EndpointSubmix.generated.h"

class UAudioEndpointSettingsBase;

UCLASS(EditInlineNew)
class ENGINE_API UEndpointSubmix : public USoundSubmixBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName EndpointType;
    
    UPROPERTY()
    TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;
    
    UPROPERTY(EditAnywhere)
    UAudioEndpointSettingsBase* EndpointSettings;
    
    UEndpointSubmix();
};

