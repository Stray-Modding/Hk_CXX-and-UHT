#pragma once
#include "CoreMinimal.h"
#include "Channel.h"
#include "ActorChannel.generated.h"

class UObject;
class AActor;

UCLASS(NonTransient)
class ENGINE_API UActorChannel : public UChannel {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY()
    TArray<UObject*> CreateSubObjects;
    
    UActorChannel();
};

