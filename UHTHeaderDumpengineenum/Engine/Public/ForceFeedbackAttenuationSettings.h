#pragma once
#include "CoreMinimal.h"
#include "BaseAttenuationSettings.h"
#include "ForceFeedbackAttenuationSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings {
    GENERATED_BODY()
public:
    FForceFeedbackAttenuationSettings();
};

