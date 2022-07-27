#pragma once
#include "CoreMinimal.h"
#include "LevelCollection.generated.h"

class AGameStateBase;
class UNetDriver;
class ULevel;
class UDemoNetDriver;

USTRUCT(BlueprintType)
struct ENGINE_API FLevelCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AGameStateBase* GameState;
    
    UPROPERTY()
    UNetDriver* NetDriver;
    
    UPROPERTY()
    UDemoNetDriver* DemoNetDriver;
    
    UPROPERTY()
    ULevel* PersistentLevel;
    
    UPROPERTY()
    TSet<ULevel*> Levels;
    
public:
    FLevelCollection();
};

