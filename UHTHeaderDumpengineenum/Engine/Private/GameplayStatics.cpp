#include "GameplayStatics.h"
#include "Templates/SubclassOf.h"

class USoundClass;
class AGameModeBase;
class UParticleSystem;
class UObject;
class UWorld;
class USoundAttenuation;
class UDamageType;
class USoundBase;
class USceneComponent;
class USoundConcurrency;
class UBlueprint;
class UAudioComponent;
class UForceFeedbackEffect;
class UForceFeedbackAttenuation;
class UPrimitiveComponent;
class UForceFeedbackComponent;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UDialogueWave;
class AController;
class ACharacter;
class UMaterialInterface;
class UDecalComponent;
class USoundMix;
class APlayerController;
class UGameInstance;
class USaveGame;
class UCameraShakeBase;
class AActor;
class UReverbEffect;
class UStaticMesh;
class ULevelStreaming;
class APawn;
class APlayerCameraManager;
class AGameStateBase;
class UInterface;
class IInterface;

void UGameplayStatics::UnRetainAllSoundsInSoundClass(USoundClass* InSoundClass) {
}

void UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload) {
}

void UGameplayStatics::UnloadStreamLevel(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload) {
}

bool UGameplayStatics::SuggestProjectileVelocity_CustomArc(const UObject* WorldContextObject, FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam) {
    return false;
}

UAudioComponent* UGameplayStatics::SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bPlaySound) {
    return NULL;
}

UAudioComponent* UGameplayStatics::SpawnSoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bPlaySound) {
    return NULL;
}

UAudioComponent* UGameplayStatics::SpawnSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bPlaySound) {
    return NULL;
}

UObject* UGameplayStatics::SpawnObject(UClass* ObjectClass, UObject* Outer) {
    return NULL;
}

UForceFeedbackComponent* UGameplayStatics::SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

UForceFeedbackComponent* UGameplayStatics::SpawnForceFeedbackAtLocation(const UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

UParticleSystemComponent* UGameplayStatics::SpawnEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate) {
    return NULL;
}

UParticleSystemComponent* UGameplayStatics::SpawnEmitterAtLocation(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem) {
    return NULL;
}

UAudioComponent* UGameplayStatics::SpawnDialogueAttached(UDialogueWave* Dialogue, const FDialogueContext& Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

UAudioComponent* UGameplayStatics::SpawnDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

UAudioComponent* UGameplayStatics::SpawnDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy) {
    return NULL;
}

UDecalComponent* UGameplayStatics::SpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan) {
    return NULL;
}

UDecalComponent* UGameplayStatics::SpawnDecalAtLocation(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan) {
    return NULL;
}

void UGameplayStatics::SetWorldOriginLocation(const UObject* WorldContextObject, FIntVector NewLocation) {
}

void UGameplayStatics::SetViewportMouseCaptureMode(const UObject* WorldContextObject, const EMouseCaptureMode MouseCaptureMode) {
}

void UGameplayStatics::SetSubtitlesEnabled(bool bEnabled) {
}

void UGameplayStatics::SetSoundMixClassOverride(const UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren) {
}

void UGameplayStatics::SetSoundClassDistanceScale(const UObject* WorldContextObject, USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec) {
}

void UGameplayStatics::SetPlayerControllerID(APlayerController* Player, int32 ControllerId) {
}

void UGameplayStatics::SetMaxAudioChannelsScaled(const UObject* WorldContextObject, float MaxChannelCountScale) {
}

void UGameplayStatics::SetGlobalTimeDilation(const UObject* WorldContextObject, float TimeDilation) {
}

void UGameplayStatics::SetGlobalPitchModulation(const UObject* WorldContextObject, float PitchModulation, float TimeSec) {
}

void UGameplayStatics::SetGlobalListenerFocusParameters(const UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale) {
}

bool UGameplayStatics::SetGamePaused(const UObject* WorldContextObject, bool bPaused) {
    return false;
}

void UGameplayStatics::SetForceDisableSplitscreen(const UObject* WorldContextObject, bool bDisable) {
}

void UGameplayStatics::SetEnableWorldRendering(const UObject* WorldContextObject, bool bEnable) {
}

void UGameplayStatics::SetBaseSoundMix(const UObject* WorldContextObject, USoundMix* InSoundMix) {
}

bool UGameplayStatics::SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex) {
    return false;
}

void UGameplayStatics::RemovePlayer(APlayerController* Player, bool bDestroyPawn) {
}

FVector UGameplayStatics::RebaseZeroOriginOntoLocal(UObject* WorldContextObject, FVector WorldLocation) {
    return FVector{};
}

FVector UGameplayStatics::RebaseLocalOriginOntoZero(UObject* WorldContextObject, FVector WorldLocation) {
    return FVector{};
}

void UGameplayStatics::PushSoundMixModifier(const UObject* WorldContextObject, USoundMix* InSoundMixModifier) {
}

bool UGameplayStatics::ProjectWorldToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative) {
    return false;
}

void UGameplayStatics::PrimeSound(USoundBase* InSound) {
}

void UGameplayStatics::PrimeAllSoundsInSoundClass(USoundClass* InSoundClass) {
}

void UGameplayStatics::PopSoundMixModifier(const UObject* WorldContextObject, USoundMix* InSoundMixModifier) {
}

void UGameplayStatics::PlayWorldCameraShake(const UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
}

void UGameplayStatics::PlaySoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, AActor* OwningActor) {
}

void UGameplayStatics::PlaySound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor, bool bIsUISound) {
}

void UGameplayStatics::PlayDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) {
}

void UGameplayStatics::PlayDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
}

FString UGameplayStatics::ParseOption(const FString& Options, const FString& Key) {
    return TEXT("");
}

void UGameplayStatics::OpenLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bAbsolute, const FString& Options) {
}

void UGameplayStatics::OpenLevel(const UObject* WorldContextObject, FName LevelName, bool bAbsolute, const FString& Options) {
}

FHitResult UGameplayStatics::MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32 HitItem, int32 ElementIndex, int32 FaceIndex, FVector TraceStart, FVector TraceEnd) {
    return FHitResult{};
}

void UGameplayStatics::LoadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo) {
}

void UGameplayStatics::LoadStreamLevel(const UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo) {
}

USaveGame* UGameplayStatics::LoadGameFromSlot(const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

bool UGameplayStatics::IsSplitscreenForceDisabled(const UObject* WorldContextObject) {
    return false;
}

bool UGameplayStatics::IsGamePaused(const UObject* WorldContextObject) {
    return false;
}

bool UGameplayStatics::HasOption(const FString& Options, const FString& InKey) {
    return false;
}

bool UGameplayStatics::HasLaunchOption(const FString& OptionToCheck) {
    return false;
}

int32 UGameplayStatics::GrassOverlappingSphereCount(const UObject* WorldContextObject, const UStaticMesh* StaticMesh, FVector CenterPosition, float Radius) {
    return 0;
}

FIntVector UGameplayStatics::GetWorldOriginLocation(const UObject* WorldContextObject) {
    return FIntVector{};
}

float UGameplayStatics::GetWorldDeltaSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

void UGameplayStatics::GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix& ViewMatrix, FMatrix& ProjectionMatrix, FMatrix& ViewProjectionMatrix) {
}

EMouseCaptureMode UGameplayStatics::GetViewportMouseCaptureMode(const UObject* WorldContextObject) {
    return EMouseCaptureMode::NoCapture;
}

float UGameplayStatics::GetUnpausedTimeSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

float UGameplayStatics::GetTimeSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

TEnumAsByte<EPhysicalSurface> UGameplayStatics::GetSurfaceType(const FHitResult& Hit) {
    return SurfaceType_Default;
}

ULevelStreaming* UGameplayStatics::GetStreamingLevel(const UObject* WorldContextObject, FName PackageName) {
    return NULL;
}

float UGameplayStatics::GetRealTimeSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

APawn* UGameplayStatics::GetPlayerPawn(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

int32 UGameplayStatics::GetPlayerControllerID(APlayerController* Player) {
    return 0;
}

APlayerController* UGameplayStatics::GetPlayerControllerFromID(const UObject* WorldContextObject, int32 ControllerId) {
    return NULL;
}

APlayerController* UGameplayStatics::GetPlayerController(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ACharacter* UGameplayStatics::GetPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

APlayerCameraManager* UGameplayStatics::GetPlayerCameraManager(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

FString UGameplayStatics::GetPlatformName() {
    return TEXT("");
}

UClass* UGameplayStatics::GetObjectClass(const UObject* Object) {
    return NULL;
}

int32 UGameplayStatics::GetMaxAudioChannelCount(const UObject* WorldContextObject) {
    return 0;
}

void UGameplayStatics::GetKeyValue(const FString& Pair, FString& Key, FString& Value) {
}

int32 UGameplayStatics::GetIntOption(const FString& Options, const FString& Key, int32 DefaultValue) {
    return 0;
}

float UGameplayStatics::GetGlobalTimeDilation(const UObject* WorldContextObject) {
    return 0.0f;
}

AGameStateBase* UGameplayStatics::GetGameState(const UObject* WorldContextObject) {
    return NULL;
}

AGameModeBase* UGameplayStatics::GetGameMode(const UObject* WorldContextObject) {
    return NULL;
}

UGameInstance* UGameplayStatics::GetGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

bool UGameplayStatics::GetEnableWorldRendering(const UObject* WorldContextObject) {
    return false;
}

UReverbEffect* UGameplayStatics::GetCurrentReverbEffect(const UObject* WorldContextObject) {
    return NULL;
}

FString UGameplayStatics::GetCurrentLevelName(const UObject* WorldContextObject, bool bRemovePrefixString) {
    return TEXT("");
}

bool UGameplayStatics::GetClosestListenerLocation(const UObject* WorldContextObject, const FVector& Location, float MaximumRange, const bool bAllowAttenuationOverride, FVector& ListenerPosition) {
    return false;
}

float UGameplayStatics::GetAudioTimeSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

void UGameplayStatics::GetAllActorsWithTag(const UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors) {
}

void UGameplayStatics::GetAllActorsWithInterface(const UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*>& OutActors) {
}

void UGameplayStatics::GetAllActorsOfClassWithTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Tag, TArray<AActor*>& OutActors) {
}

void UGameplayStatics::GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

AActor* UGameplayStatics::GetActorOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UGameplayStatics::GetActorArrayBounds(const TArray<AActor*>& Actors, bool bOnlyCollidingComponents, FVector& Center, FVector& BoxExtent) {
}

FVector UGameplayStatics::GetActorArrayAverageLocation(const TArray<AActor*>& Actors) {
    return FVector{};
}

void UGameplayStatics::GetAccurateRealTime(int32& Seconds, float& PartialSeconds) {
}

void UGameplayStatics::FlushLevelStreaming(const UObject* WorldContextObject) {
}

AActor* UGameplayStatics::FinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform) {
    return NULL;
}

AActor* UGameplayStatics::FindNearestActor(FVector Origin, const TArray<AActor*>& ActorsToCheck, float& Distance) {
    return NULL;
}

bool UGameplayStatics::FindCollisionUV(const FHitResult& Hit, int32 UVChannel, FVector2D& UV) {
    return false;
}

void UGameplayStatics::EnableLiveStreaming(bool Enable) {
}

bool UGameplayStatics::DoesSaveGameExist(const FString& SlotName, const int32 UserIndex) {
    return false;
}

bool UGameplayStatics::DeprojectScreenToWorld(APlayerController* Player, const FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection) {
    return false;
}

bool UGameplayStatics::DeleteGameInSlot(const FString& SlotName, const int32 UserIndex) {
    return false;
}

void UGameplayStatics::DeactivateReverbEffect(const UObject* WorldContextObject, FName TagName) {
}

UAudioComponent* UGameplayStatics::CreateSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return NULL;
}

USaveGame* UGameplayStatics::CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass) {
    return NULL;
}

APlayerController* UGameplayStatics::CreatePlayer(const UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController) {
    return NULL;
}

void UGameplayStatics::ClearSoundMixModifiers(const UObject* WorldContextObject) {
}

void UGameplayStatics::ClearSoundMixClassOverride(const UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float FadeOutTime) {
}

void UGameplayStatics::CancelAsyncLoading() {
}

void UGameplayStatics::BreakHitResult(const FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial*& PhysMat, AActor*& HitActor, UPrimitiveComponent*& HitComponent, FName& HitBoneName, int32& HitItem, int32& ElementIndex, int32& FaceIndex, FVector& TraceStart, FVector& TraceEnd) {
}

bool UGameplayStatics::BlueprintSuggestProjectileVelocity(const UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption::Type> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug) {
    return false;
}

bool UGameplayStatics::Blueprint_PredictProjectilePath_ByTraceChannel(const UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
    return false;
}

bool UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(const UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ) {
    return false;
}

bool UGameplayStatics::Blueprint_PredictProjectilePath_Advanced(const UObject* WorldContextObject, const FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult) {
    return false;
}

AActor* UGameplayStatics::BeginSpawningActorFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, bool bNoCollisionFail, AActor* Owner) {
    return NULL;
}

AActor* UGameplayStatics::BeginSpawningActorFromBlueprint(const UObject* WorldContextObject, const UBlueprint* Blueprint, const FTransform& SpawnTransform, bool bNoCollisionFail) {
    return NULL;
}

AActor* UGameplayStatics::BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner) {
    return NULL;
}

bool UGameplayStatics::AreSubtitlesEnabled() {
    return false;
}

bool UGameplayStatics::AreAnyListenersWithinRange(const UObject* WorldContextObject, const FVector& Location, float MaximumRange) {
    return false;
}

bool UGameplayStatics::ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
    return false;
}

bool UGameplayStatics::ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
    return false;
}

float UGameplayStatics::ApplyPointDamage(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
    return 0.0f;
}

float UGameplayStatics::ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
    return 0.0f;
}

void UGameplayStatics::AnnounceAccessibleString(const FString& AnnouncementString) {
}

void UGameplayStatics::ActivateReverbEffect(const UObject* WorldContextObject, UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime) {
}

UGameplayStatics::UGameplayStatics() {
}

