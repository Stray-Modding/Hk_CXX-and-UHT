#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundEffectPreset.generated.h"

UCLASS(Abstract, EditInlineNew)
class ENGINE_API USoundEffectPreset : public UObject {
    GENERATED_BODY()
public:
    USoundEffectPreset();
};

