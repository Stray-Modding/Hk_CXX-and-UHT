#pragma once
#include "CoreMinimal.h"
#include "SoundEffectPreset.h"
#include "SoundEffectSourcePreset.generated.h"

UCLASS(Abstract, EditInlineNew)
class ENGINE_API USoundEffectSourcePreset : public USoundEffectPreset {
    GENERATED_BODY()
public:
    USoundEffectSourcePreset();
};

