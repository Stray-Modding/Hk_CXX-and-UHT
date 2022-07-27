#pragma once
#include "CoreMinimal.h"
#include "SoundBase.h"
#include "SoundAttenuationSettings.h"
#include "SoundCue.generated.h"

class USoundNode;

UCLASS(EditInlineNew)
class ENGINE_API USoundCue : public USoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bPrimeOnLoad: 1;
    
    UPROPERTY()
    USoundNode* FirstNode;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(EditAnywhere)
    FSoundAttenuationSettings AttenuationOverrides;
    
protected:
    UPROPERTY(EditAnywhere)
    float SubtitlePriority;
    
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bExcludeFromRandomNodeBranchCulling: 1;
    
private:
    UPROPERTY()
    int32 CookedQualityIndex;
    
    UPROPERTY()
    uint8 bHasPlayWhenSilent: 1;
    
public:
    USoundCue();
};

