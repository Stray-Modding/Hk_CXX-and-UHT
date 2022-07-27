#pragma once
#include "CoreMinimal.h"
#include "PassiveSoundMixModifier.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FPassiveSoundMixModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundMix* SoundMix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinVolumeThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxVolumeThreshold;
    
    ENGINE_API FPassiveSoundMixModifier();
};

