#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEventReference.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAnimNotifyEventReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* NotifySource;
    
public:
    ENGINE_API FAnimNotifyEventReference();
};

