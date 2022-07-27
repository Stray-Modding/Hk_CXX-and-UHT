#pragma once
#include "CoreMinimal.h"
#include "RollbackNetStartupActorInfo.h"
#include "NetDriver.h"
#include "MulticastRecordOptions.h"
#include "DemoNetDriver.generated.h"

class APlayerController;

UCLASS(NonTransient)
class ENGINE_API UDemoNetDriver : public UNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors;
    
private:
    UPROPERTY(Config)
    float CheckpointSaveMaxMSPerFrame;
    
    UPROPERTY(Config)
    TArray<FMulticastRecordOptions> MulticastRecordOptions;
    
public:
    UPROPERTY()
    bool bIsLocalReplay;
    
private:
    UPROPERTY(Transient)
    TArray<APlayerController*> SpectatorControllers;
    
public:
    UDemoNetDriver();
};

