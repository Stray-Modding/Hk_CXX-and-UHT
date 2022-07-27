#pragma once
#include "CoreMinimal.h"
#include "TickableWorldSubsystem.h"
#include "EEndPlayReason.h"
#include "AutoDestroySubsystem.generated.h"

class AActor;

UCLASS()
class UAutoDestroySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<AActor*> ActorsToPoll;
    
public:
    UAutoDestroySubsystem();
private:
    UFUNCTION()
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

