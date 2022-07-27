#pragma once
#include "CoreMinimal.h"
#include "AnimSlotInfo.generated.h"

USTRUCT()
struct FAnimSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SlotName;
    
    UPROPERTY()
    TArray<float> ChannelWeights;
    
    ENGINE_API FAnimSlotInfo();
};

