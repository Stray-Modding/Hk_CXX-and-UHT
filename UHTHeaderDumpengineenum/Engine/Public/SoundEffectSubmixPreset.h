#pragma once
#include "CoreMinimal.h"
#include "SoundEffectPreset.h"
#include "SoundEffectSubmixPreset.generated.h"

UCLASS(Abstract, EditInlineNew)
class ENGINE_API USoundEffectSubmixPreset : public USoundEffectPreset {
    GENERATED_BODY()
public:
    USoundEffectSubmixPreset();
};

