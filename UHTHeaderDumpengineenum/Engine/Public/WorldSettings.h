#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Info.h"
#include "BroadphaseSettings.h"
#include "Interface_AssetUserData.h"
#include "EVisibilityAggressiveness.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ReverbSettings.h"
#include "InteriorSettings.h"
#include "NetViewer.h"
#include "WorldSettings.generated.h"

class UNavigationSystemConfig;
class UPhysicsCollisionHandler;
class ADefaultPhysicsVolume;
class UDamageType;
class AGameModeBase;
class AGameNetworkManager;
class USoundMix;
class APlayerState;
class UAssetUserData;
class UBookmarkBase;

UCLASS(NotPlaceable, Config=Game)
class ENGINE_API AWorldSettings : public AInfo, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 VisibilityCellSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EVisibilityAggressiveness> VisibilityAggressiveness;
    
    UPROPERTY(EditAnywhere)
    uint8 bPrecomputeVisibility: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bPlaceCellsOnlyAlongCameraTracks: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bEnableWorldBoundsChecks: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, Config)
    uint8 bEnableNavigationSystem: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    uint8 bEnableAISystem: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableWorldComposition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseClientSideLevelStreamingVolumes: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bEnableWorldOriginRebasing: 1;
    
    UPROPERTY(Transient)
    uint8 bWorldGravitySet: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bGlobalGravitySet: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bMinimizeBSPSections: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bForceNoPrecomputedLighting: 1;
    
    UPROPERTY(Replicated)
    uint8 bHighPriorityLoading: 1;
    
    UPROPERTY()
    uint8 bHighPriorityLoadingLocal: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bOverrideDefaultBroadphaseSettings: 1;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, Instanced, NoClear)
    UNavigationSystemConfig* NavigationSystemConfig;
    
    UPROPERTY(Transient)
    UNavigationSystemConfig* NavigationSystemConfigOverride;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WorldToMeters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KillZ;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> KillZDamageType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_WorldGravityZ)
    float WorldGravityZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GlobalGravityZ;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<ADefaultPhysicsVolume> DefaultPhysicsVolumeClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AGameModeBase> DefaultGameMode;
    
    UPROPERTY()
    TSubclassOf<AGameNetworkManager> GameNetworkManagerClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 PackedLightAndShadowMapTextureSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector DefaultColorScale;
    
    UPROPERTY(EditAnywhere)
    float DefaultMaxDistanceFieldOcclusionDistance;
    
    UPROPERTY(EditAnywhere)
    float GlobalDistanceFieldViewDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float DynamicIndirectShadowsSelfShadowingIntensity;
    
    UPROPERTY(Config, EditAnywhere)
    FReverbSettings DefaultReverbSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FInteriorSettings DefaultAmbientZoneSettings;
    
    UPROPERTY(EditAnywhere)
    USoundMix* DefaultBaseSoundMix;
    
    UPROPERTY(Replicated, Transient)
    float TimeDilation;
    
    UPROPERTY(Replicated, Transient)
    float MatineeTimeDilation;
    
    UPROPERTY(Transient)
    float DemoPlayTimeDilation;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float MinGlobalTimeDilation;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float MaxGlobalTimeDilation;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float MinUndilatedFrameTime;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float MaxUndilatedFrameTime;
    
    UPROPERTY(Config, EditAnywhere)
    FBroadphaseSettings BroadphaseSettings;
    
    UPROPERTY(Transient)
    APlayerState* Pauser;
    
    UPROPERTY()
    TArray<FNetViewer> ReplicationViewers;
    
protected:
    UPROPERTY(Export)
    TArray<UAssetUserData*> AssetUserData;
    
    UPROPERTY(Replicated, Transient)
    APlayerState* PauserPlayerState;
    
private:
    UPROPERTY(Config)
    int32 MaxNumberOfBookmarks;
    
    UPROPERTY(Config)
    TSubclassOf<UBookmarkBase> DefaultBookmarkClass;
    
    UPROPERTY()
    TArray<UBookmarkBase*> BookmarkArray;
    
    UPROPERTY()
    TSubclassOf<UBookmarkBase> LastBookmarkClass;
    
public:
    AWorldSettings();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_WorldGravityZ();
    
    
    // Fix for true pure virtual functions not being implemented
};

