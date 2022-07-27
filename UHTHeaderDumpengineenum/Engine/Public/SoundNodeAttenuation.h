#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundAttenuationSettings.h"
#include "SoundNodeAttenuation.generated.h"

class USoundAttenuation;

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeAttenuation : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(EditAnywhere)
    FSoundAttenuationSettings AttenuationOverrides;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    USoundNodeAttenuation();
};

