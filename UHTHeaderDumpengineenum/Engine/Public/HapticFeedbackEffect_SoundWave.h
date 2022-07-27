#pragma once
#include "CoreMinimal.h"
#include "HapticFeedbackEffect_Base.h"
#include "HapticFeedbackEffect_SoundWave.generated.h"

class USoundWave;

UCLASS(MinimalAPI)
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundWave* SoundWave;
    
    UHapticFeedbackEffect_SoundWave();
};

