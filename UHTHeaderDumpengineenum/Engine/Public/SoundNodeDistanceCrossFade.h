#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "DistanceDatum.h"
#include "SoundNodeDistanceCrossFade.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeDistanceCrossFade : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, Export)
    TArray<FDistanceDatum> CrossFadeInput;
    
    USoundNodeDistanceCrossFade();
};

