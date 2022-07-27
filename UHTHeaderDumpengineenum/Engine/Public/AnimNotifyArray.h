#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEventReference.h"
#include "AnimNotifyArray.generated.h"

USTRUCT(BlueprintType)
struct FAnimNotifyArray {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FAnimNotifyEventReference> Notifies;
    
    ENGINE_API FAnimNotifyArray();
};

