#pragma once
#include "CoreMinimal.h"
#include "SoundNodeDistanceCrossFade.h"
#include "SoundNodeParamCrossFade.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    USoundNodeParamCrossFade();
};

