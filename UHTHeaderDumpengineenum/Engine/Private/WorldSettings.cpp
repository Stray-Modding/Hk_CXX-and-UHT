#include "WorldSettings.h"
#include "Net/UnrealNetwork.h"
#include "DefaultPhysicsVolume.h"
#include "GameNetworkManager.h"
#include "BookMark.h"

void AWorldSettings::OnRep_WorldGravityZ() {
}

void AWorldSettings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWorldSettings, bHighPriorityLoading);
    DOREPLIFETIME(AWorldSettings, WorldGravityZ);
    DOREPLIFETIME(AWorldSettings, TimeDilation);
    DOREPLIFETIME(AWorldSettings, MatineeTimeDilation);
    DOREPLIFETIME(AWorldSettings, PauserPlayerState);
}

AWorldSettings::AWorldSettings() {
    this->VisibilityCellSize = 200;
    this->VisibilityAggressiveness = VIS_LeastAggressive;
    this->bPrecomputeVisibility = false;
    this->bPlaceCellsOnlyAlongCameraTracks = false;
    this->bEnableWorldBoundsChecks = true;
    this->bEnableNavigationSystem = true;
    this->bEnableAISystem = true;
    this->bEnableWorldComposition = false;
    this->bUseClientSideLevelStreamingVolumes = false;
    this->bEnableWorldOriginRebasing = false;
    this->bWorldGravitySet = false;
    this->bGlobalGravitySet = false;
    this->bMinimizeBSPSections = false;
    this->bForceNoPrecomputedLighting = false;
    this->bHighPriorityLoading = false;
    this->bHighPriorityLoadingLocal = false;
    this->bOverrideDefaultBroadphaseSettings = false;
    this->NavigationSystemConfig = NULL;
    this->NavigationSystemConfigOverride = NULL;
    this->WorldToMeters = 100.00f;
    this->KillZ = -1048575.00f;
    this->WorldGravityZ = 0.00f;
    this->GlobalGravityZ = 0.00f;
    this->DefaultPhysicsVolumeClass = ADefaultPhysicsVolume::StaticClass();
    this->PhysicsCollisionHandlerClass = NULL;
    this->DefaultGameMode = NULL;
    this->GameNetworkManagerClass = AGameNetworkManager::StaticClass();
    this->PackedLightAndShadowMapTextureSize = 1024;
    this->DefaultMaxDistanceFieldOcclusionDistance = 600.00f;
    this->GlobalDistanceFieldViewDistance = 20000.00f;
    this->DynamicIndirectShadowsSelfShadowingIntensity = 0.25f;
    this->DefaultBaseSoundMix = NULL;
    this->TimeDilation = 1.00f;
    this->MatineeTimeDilation = 1.00f;
    this->DemoPlayTimeDilation = 1.00f;
    this->MinGlobalTimeDilation = 0.00f;
    this->MaxGlobalTimeDilation = 20.00f;
    this->MinUndilatedFrameTime = 0.00f;
    this->MaxUndilatedFrameTime = 0.40f;
    this->Pauser = NULL;
    this->PauserPlayerState = NULL;
    this->MaxNumberOfBookmarks = 10;
    this->DefaultBookmarkClass = UBookMark::StaticClass();
    this->LastBookmarkClass = UBookMark::StaticClass();
}

