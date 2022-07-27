#pragma once
#include "CoreMinimal.h"
#include "DialogueContext.h"
#include "DialogueContextMapping.generated.h"

class USoundWave;
class UDialogueSoundWaveProxy;

USTRUCT(BlueprintType)
struct ENGINE_API FDialogueContextMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogueContext Context;
    
    UPROPERTY(EditAnywhere)
    USoundWave* SoundWave;
    
    UPROPERTY(EditAnywhere)
    FString LocalizationKeyFormat;
    
    UPROPERTY(Transient)
    UDialogueSoundWaveProxy* Proxy;
    
    FDialogueContextMapping();
};

