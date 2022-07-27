#pragma once
#include "CoreMinimal.h"
#include "AnimSlotDesc.generated.h"

USTRUCT()
struct FAnimSlotDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SlotName;
    
    UPROPERTY()
    int32 NumChannels;
    
    ENGINE_API FAnimSlotDesc();
};

