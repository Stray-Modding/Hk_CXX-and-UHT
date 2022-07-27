#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeWaveParam.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeWaveParam : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WaveParameterName;
    
    USoundNodeWaveParam();
};

