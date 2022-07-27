#pragma once
#include "CoreMinimal.h"
#include "AudioEffectParameters.h"
#include "AudioReverbEffect.generated.h"

USTRUCT()
struct ENGINE_API FAudioReverbEffect : public FAudioEffectParameters {
    GENERATED_BODY()
public:
    FAudioReverbEffect();
};

