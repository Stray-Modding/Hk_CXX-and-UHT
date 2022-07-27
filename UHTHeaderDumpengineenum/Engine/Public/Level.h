#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_AssetUserData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReplicatedStaticActorDestructionInfo.h"
#include "Level.generated.h"

class AWorldSettings;
class UWorld;
class UModelComponent;
class AActor;
class UModel;
class ANavigationObjectBase;
class ULevelActorContainer;
class ALevelScriptActor;
class UNavigationDataChunk;
class UMapBuildDataRegistry;
class UAssetUserData;

UCLASS(MinimalAPI)
class ULevel : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UWorld* OwningWorld;
    
    UPROPERTY()
    UModel* Model;
    
    UPROPERTY(Export)
    TArray<UModelComponent*> ModelComponents;
    
    UPROPERTY(DuplicateTransient, Export, NonTransactional, Transient)
    ULevelActorContainer* ActorCluster;
    
    UPROPERTY(NonTransactional)
    int32 NumTextureStreamingUnbuiltComponents;
    
    UPROPERTY(NonTransactional)
    int32 NumTextureStreamingDirtyResources;
    
    UPROPERTY(NonTransactional)
    ALevelScriptActor* LevelScriptActor;
    
    UPROPERTY()
    ANavigationObjectBase* NavListStart;
    
    UPROPERTY()
    ANavigationObjectBase* NavListEnd;
    
    UPROPERTY()
    TArray<UNavigationDataChunk*> NavDataChunks;
    
    UPROPERTY(VisibleAnywhere)
    float LightmapTotalSize;
    
    UPROPERTY(VisibleAnywhere)
    float ShadowmapTotalSize;
    
    UPROPERTY()
    TArray<FVector> StaticNavigableGeometry;
    
    UPROPERTY()
    TArray<FGuid> StreamingTextureGuids;
    
    UPROPERTY()
    FGuid LevelBuildDataId;
    
    UPROPERTY(NonPIEDuplicateTransient)
    UMapBuildDataRegistry* MapBuildData;
    
    UPROPERTY()
    FIntVector LightBuildLevelOffset;
    
    UPROPERTY()
    uint8 bIsLightingScenario: 1;
    
    UPROPERTY()
    uint8 bTextureStreamingRotationChanged: 1;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    uint8 bStaticComponentsRegisteredInStreamingManager: 1;
    
    UPROPERTY(Transient)
    uint8 bIsVisible: 1;
    
private:
    UPROPERTY()
    AWorldSettings* WorldSettings;
    
protected:
    UPROPERTY(Export)
    TArray<UAssetUserData*> AssetUserData;
    
private:
    UPROPERTY(Transient)
    TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;
    
public:
    UPROPERTY()
    TArray<AActor*> ActorsToPreInitialize;
    
    UPROPERTY()
    TArray<AActor*> ActorsToInitialize;
    
    UPROPERTY()
    TArray<AActor*> ActorsToBeginPlay;
    
    ULevel();
    
    // Fix for true pure virtual functions not being implemented
};

