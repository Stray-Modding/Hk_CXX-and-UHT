#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeLooping.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeLooping : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoopIndefinitely: 1;
    
    USoundNodeLooping();
};

