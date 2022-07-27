#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeRandom.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeRandom : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> Weights;
    
    UPROPERTY(Transient)
    TArray<bool> HasBeenUsed;
    
    UPROPERTY(Transient)
    int32 NumRandomUsed;
    
    UPROPERTY(EditAnywhere)
    int32 PreselectAtLevelLoad;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldExcludeFromBranchCulling: 1;
    
    UPROPERTY()
    uint8 bSoundCueExcludedFromBranchCulling: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRandomizeWithoutReplacement: 1;
    
    USoundNodeRandom();
};

