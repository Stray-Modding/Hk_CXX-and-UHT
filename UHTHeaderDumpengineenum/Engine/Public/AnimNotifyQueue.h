#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyArray.h"
#include "AnimNotifyEventReference.h"
#include "AnimNotifyQueue.generated.h"

USTRUCT(BlueprintType)
struct FAnimNotifyQueue {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FAnimNotifyEventReference> AnimNotifies;
    
    UPROPERTY(Transient)
    TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies;
    
    ENGINE_API FAnimNotifyQueue();
};

