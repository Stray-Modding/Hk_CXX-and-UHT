#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "DialogueWaveParameter.h"
#include "SoundNodeDialoguePlayer.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeDialoguePlayer : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDialogueWaveParameter DialogueWaveParameter;
    
    UPROPERTY(EditAnywhere)
    uint8 bLooping: 1;
    
    USoundNodeDialoguePlayer();
};

