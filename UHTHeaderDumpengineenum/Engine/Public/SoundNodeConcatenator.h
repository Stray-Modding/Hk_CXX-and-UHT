#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeConcatenator.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeConcatenator : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> InputVolume;
    
    USoundNodeConcatenator();
};

