#pragma once
#include "CoreMinimal.h"
#include "EQuartzTimeSignatureQuantization.h"
#include "QuartzPulseOverrideStep.h"
#include "QuartzTimeSignature.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzTimeSignature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumBeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EQuartzTimeSignatureQuantization BeatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FQuartzPulseOverrideStep> OptionalPulseOverride;
    
    FQuartzTimeSignature();
};

