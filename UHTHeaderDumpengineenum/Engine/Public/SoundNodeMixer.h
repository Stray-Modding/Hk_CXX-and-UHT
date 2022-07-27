#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeMixer.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeMixer : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, Export)
    TArray<float> InputVolume;
    
    USoundNodeMixer();
};

