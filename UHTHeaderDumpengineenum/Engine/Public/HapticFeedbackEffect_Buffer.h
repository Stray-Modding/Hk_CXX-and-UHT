#pragma once
#include "CoreMinimal.h"
#include "HapticFeedbackEffect_Base.h"
#include "HapticFeedbackEffect_Buffer.generated.h"

UCLASS(MinimalAPI)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> Amplitudes;
    
    UPROPERTY(EditAnywhere)
    int32 SampleRate;
    
    UHapticFeedbackEffect_Buffer();
};

