#pragma once
#include "CoreMinimal.h"
#include "DialogueContext.h"
#include "DialogueWaveParameter.generated.h"

class UDialogueWave;

USTRUCT(BlueprintType)
struct ENGINE_API FDialogueWaveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogueWave* DialogueWave;
    
    UPROPERTY(EditAnywhere)
    FDialogueContext Context;
    
    FDialogueWaveParameter();
};

