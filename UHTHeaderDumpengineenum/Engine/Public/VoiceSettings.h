#pragma once
#include "CoreMinimal.h"
#include "VoiceSettings.generated.h"

class USoundEffectSourcePresetChain;
class USceneComponent;
class USoundAttenuation;

USTRUCT(BlueprintType)
struct FVoiceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* ComponentToAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundEffectSourcePresetChain* SourceEffectChain;
    
    ENGINE_API FVoiceSettings();
};

