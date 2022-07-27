#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StreamingLevelsToConsider.h"
#include "LevelCollection.h"
#include "WorldPSCPool.h"
#include "World.generated.h"

class AGameNetworkManager;
class AWorldSettings;
class UCanvas;
class AGameModeBase;
class ULevel;
class ULevelStreaming;
class UNetDriver;
class UWorldComposition;
class UPhysicsCollisionHandler;
class ULineBatchComponent;
class UDemoNetDriver;
class AParticleEventManager;
class APhysicsVolume;
class UMaterialParameterCollectionInstance;
class UNavigationSystemBase;
class AGameStateBase;
class UAISystemBase;
class UAvoidanceManager;
class UGameInstance;
class UPhysicsFieldComponent;
class UActorComponent;

UCLASS(BlueprintType)
class ENGINE_API UWorld : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ULevel* PersistentLevel;
    
    UPROPERTY(Transient)
    UNetDriver* NetDriver;
    
    UPROPERTY(Export, Transient)
    ULineBatchComponent* LineBatcher;
    
    UPROPERTY(Export, Transient)
    ULineBatchComponent* PersistentLineBatcher;
    
    UPROPERTY(Export, Transient)
    ULineBatchComponent* ForegroundLineBatcher;
    
    UPROPERTY(Transient)
    AGameNetworkManager* NetworkManager;
    
    UPROPERTY(Transient)
    UPhysicsCollisionHandler* PhysicsCollisionHandler;
    
    UPROPERTY(Transient)
    TArray<UObject*> ExtraReferencedObjects;
    
    UPROPERTY(Transient)
    TArray<UObject*> PerModuleDataObjects;
    
private:
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> StreamingLevels;
    
    UPROPERTY(DuplicateTransient, Transient)
    FStreamingLevelsToConsider StreamingLevelsToConsider;
    
public:
    UPROPERTY()
    FString StreamingLevelsPrefix;
    
private:
    UPROPERTY(Transient)
    ULevel* CurrentLevelPendingVisibility;
    
    UPROPERTY(Transient)
    ULevel* CurrentLevelPendingInvisibility;
    
public:
    UPROPERTY()
    UDemoNetDriver* DemoNetDriver;
    
    UPROPERTY()
    AParticleEventManager* MyParticleEventManager;
    
private:
    UPROPERTY(Transient)
    APhysicsVolume* DefaultPhysicsVolume;
    
public:
    UPROPERTY(Transient)
    uint8 bAreConstraintsDirty: 1;
    
private:
    UPROPERTY(Transient)
    UNavigationSystemBase* NavigationSystem;
    
    UPROPERTY(Transient)
    AGameModeBase* AuthorityGameMode;
    
    UPROPERTY(Transient)
    AGameStateBase* GameState;
    
    UPROPERTY(Transient)
    UAISystemBase* AISystem;
    
    UPROPERTY(Transient)
    UAvoidanceManager* AvoidanceManager;
    
    UPROPERTY(Transient)
    TArray<ULevel*> Levels;
    
    UPROPERTY(NonTransactional, Transient)
    TArray<FLevelCollection> LevelCollections;
    
    UPROPERTY(Transient)
    UGameInstance* OwningGameInstance;
    
    UPROPERTY(Transient)
    TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances;
    
    UPROPERTY(Transient)
    UCanvas* CanvasForRenderingToTarget;
    
    UPROPERTY(Transient)
    UCanvas* CanvasForDrawMaterialToRenderTarget;
    
public:
    UPROPERTY(Export, Transient)
    UPhysicsFieldComponent* PhysicsField;
    
private:
    UPROPERTY(Export, NonTransactional, Transient)
    TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync;
    
    UPROPERTY(Export, NonTransactional, Transient)
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;
    
    UPROPERTY(Export, NonTransactional, Transient)
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;
    
public:
    UPROPERTY()
    UWorldComposition* WorldComposition;
    
private:
    UPROPERTY()
    FWorldPSCPool PSCPool;
    
public:
    UWorld();
    UFUNCTION(BlueprintCallable)
    AWorldSettings* K2_GetWorldSettings();
    
    UFUNCTION()
    void HandleTimelineScrubbed();
    
};

