#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeSoundClass.generated.h"

class USoundClass;

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeSoundClass : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundClass* SoundClassOverride;
    
    USoundNodeSoundClass();
};

