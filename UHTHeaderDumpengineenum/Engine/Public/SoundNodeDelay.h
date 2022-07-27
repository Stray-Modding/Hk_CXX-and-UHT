#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeDelay.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeDelay : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DelayMin;
    
    UPROPERTY(EditAnywhere)
    float DelayMax;
    
    USoundNodeDelay();
};

