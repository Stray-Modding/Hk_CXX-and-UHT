#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BlueprintFunctionLibrary.h"
#include "ESuggestProjVelocityTraceOption.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "LatentActionInfo.h"
#include "PredictProjectilePathParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HitResult.h"
#include "EObjectTypeQuery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EAttachLocation.h"
#include "PredictProjectilePathResult.h"
#include "EPSCPoolMethod.h"
#include "DialogueContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "EMouseCaptureMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "ESpawnActorCollisionHandlingMethod.h"
#include "MinimalViewInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
#include "ECollisionChannel.h"
#include "EDrawDebugTrace.h"
#include "GameplayStatics.generated.h"

class USoundBase;
class USoundClass;
class AGameModeBase;
class UParticleSystem;
class UObject;
class UWorld;
class USoundAttenuation;
class UBlueprint;
class UAudioComponent;
class USceneComponent;
class UDamageType;
class USoundConcurrency;
class UPrimitiveComponent;
class UForceFeedbackComponent;
class UForceFeedbackEffect;
class UForceFeedbackAttenuation;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UDialogueWave;
class UDecalComponent;
class AController;
class ACharacter;
class UMaterialInterface;
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

UCLASS(BlueprintType)
class ENGINE_API UGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static void UnRetainAllSoundsInSoundClass(USoundClass* InSoundClass);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadStreamLevel(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    
    UFUNCTION(BlueprintCallable)
    static bool SuggestProjectileVelocity_CustomArc(const UObject* WorldContextObject, FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam);
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* SpawnSoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* SpawnSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    static UObject* SpawnObject(UClass* ObjectClass, UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    static UForceFeedbackComponent* SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static UForceFeedbackComponent* SpawnForceFeedbackAtLocation(const UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* SpawnEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* SpawnEmitterAtLocation(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* SpawnDialogueAttached(UDialogueWave* Dialogue, const FDialogueContext& Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* SpawnDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* SpawnDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UDecalComponent* SpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UDecalComponent* SpawnDecalAtLocation(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldOriginLocation(const UObject* WorldContextObject, FIntVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewportMouseCaptureMode(const UObject* WorldContextObject, const EMouseCaptureMode MouseCaptureMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubtitlesEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoundMixClassOverride(const UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSoundClassDistanceScale(const UObject* WorldContextObject, USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerControllerID(APlayerController* Player, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxAudioChannelsScaled(const UObject* WorldContextObject, float MaxChannelCountScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalTimeDilation(const UObject* WorldContextObject, float TimeDilation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetGlobalPitchModulation(const UObject* WorldContextObject, float PitchModulation, float TimeSec);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetGlobalListenerFocusParameters(const UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGamePaused(const UObject* WorldContextObject, bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceDisableSplitscreen(const UObject* WorldContextObject, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableWorldRendering(const UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseSoundMix(const UObject* WorldContextObject, USoundMix* InSoundMix);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePlayer(APlayerController* Player, bool bDestroyPawn);
    
    UFUNCTION(BlueprintPure)
    static FVector RebaseZeroOriginOntoLocal(UObject* WorldContextObject, FVector WorldLocation);
    
    UFUNCTION(BlueprintPure)
    static FVector RebaseLocalOriginOntoZero(UObject* WorldContextObject, FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    static void PushSoundMixModifier(const UObject* WorldContextObject, USoundMix* InSoundMixModifier);
    
    UFUNCTION(BlueprintPure)
    static bool ProjectWorldToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable)
    static void PrimeSound(USoundBase* InSound);
    
    UFUNCTION(BlueprintCallable)
    static void PrimeAllSoundsInSoundClass(USoundClass* InSoundClass);
    
    UFUNCTION(BlueprintCallable)
    static void PopSoundMixModifier(const UObject* WorldContextObject, USoundMix* InSoundMixModifier);
    
    UFUNCTION(BlueprintCallable)
    static void PlayWorldCameraShake(const UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, AActor* OwningActor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlaySound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor, bool bIsUISound);
    
    UFUNCTION(BlueprintCallable)
    static void PlayDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    
    UFUNCTION(BlueprintPure)
    static FString ParseOption(const FString& Options, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static void OpenLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bAbsolute, const FString& Options);
    
    UFUNCTION(BlueprintCallable)
    static void OpenLevel(const UObject* WorldContextObject, FName LevelName, bool bAbsolute, const FString& Options);
    
    UFUNCTION(BlueprintPure)
    static FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32 HitItem, int32 ElementIndex, int32 FaceIndex, FVector TraceStart, FVector TraceEnd);
    
    UFUNCTION(BlueprintCallable)
    static void LoadStreamLevelBySoftObjectPtr(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void LoadStreamLevel(const UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadGameFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintPure)
    static bool IsSplitscreenForceDisabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsGamePaused(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool HasOption(const FString& Options, const FString& InKey);
    
    UFUNCTION(BlueprintPure)
    static bool HasLaunchOption(const FString& OptionToCheck);
    
    UFUNCTION(BlueprintCallable)
    static int32 GrassOverlappingSphereCount(const UObject* WorldContextObject, const UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    
    UFUNCTION(BlueprintPure)
    static FIntVector GetWorldOriginLocation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetWorldDeltaSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix& ViewMatrix, FMatrix& ProjectionMatrix, FMatrix& ViewProjectionMatrix);
    
    UFUNCTION(BlueprintPure)
    static EMouseCaptureMode GetViewportMouseCaptureMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetUnpausedTimeSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetTimeSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> GetSurfaceType(const FHitResult& Hit);
    
    UFUNCTION(BlueprintPure)
    static ULevelStreaming* GetStreamingLevel(const UObject* WorldContextObject, FName PackageName);
    
    UFUNCTION(BlueprintPure)
    static float GetRealTimeSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static APawn* GetPlayerPawn(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlayerControllerID(APlayerController* Player);
    
    UFUNCTION(BlueprintPure)
    static APlayerController* GetPlayerControllerFromID(const UObject* WorldContextObject, int32 ControllerId);
    
    UFUNCTION(BlueprintPure)
    static APlayerController* GetPlayerController(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    static ACharacter* GetPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    static APlayerCameraManager* GetPlayerCameraManager(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    static FString GetPlatformName();
    
    UFUNCTION(BlueprintPure)
    static UClass* GetObjectClass(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaxAudioChannelCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void GetKeyValue(const FString& Pair, FString& Key, FString& Value);
    
    UFUNCTION(BlueprintPure)
    static int32 GetIntOption(const FString& Options, const FString& Key, int32 DefaultValue);
    
    UFUNCTION(BlueprintPure)
    static float GetGlobalTimeDilation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AGameStateBase* GetGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AGameModeBase* GetGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UGameInstance* GetGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableWorldRendering(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UReverbEffect* GetCurrentReverbEffect(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentLevelName(const UObject* WorldContextObject, bool bRemovePrefixString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetClosestListenerLocation(const UObject* WorldContextObject, const FVector& Location, float MaximumRange, const bool bAllowAttenuationOverride, FVector& ListenerPosition);
    
    UFUNCTION(BlueprintPure)
    static float GetAudioTimeSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsWithTag(const UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsWithInterface(const UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfClassWithTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Tag, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetActorOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorArrayBounds(const TArray<AActor*>& Actors, bool bOnlyCollidingComponents, FVector& Center, FVector& BoxExtent);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetActorArrayAverageLocation(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintPure)
    static void GetAccurateRealTime(int32& Seconds, float& PartialSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void FlushLevelStreaming(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintPure)
    static AActor* FindNearestActor(FVector Origin, const TArray<AActor*>& ActorsToCheck, float& Distance);
    
    UFUNCTION(BlueprintPure)
    static bool FindCollisionUV(const FHitResult& Hit, int32 UVChannel, FVector2D& UV);
    
    UFUNCTION(BlueprintCallable)
    static void EnableLiveStreaming(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSaveGameExist(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintPure)
    static bool DeprojectScreenToWorld(APlayerController* Player, const FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteGameInSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateReverbEffect(const UObject* WorldContextObject, FName TagName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAudioComponent* CreateSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass);
    
    UFUNCTION(BlueprintCallable)
    static APlayerController* CreatePlayer(const UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSoundMixModifiers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSoundMixClassOverride(const UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAsyncLoading();
    
    UFUNCTION(BlueprintPure)
    static void BreakHitResult(const FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial*& PhysMat, AActor*& HitActor, UPrimitiveComponent*& HitComponent, FName& HitBoneName, int32& HitItem, int32& ElementIndex, int32& FaceIndex, FVector& TraceStart, FVector& TraceEnd);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintSuggestProjectileVelocity(const UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption::Type> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    static bool Blueprint_PredictProjectilePath_ByTraceChannel(const UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    
    UFUNCTION(BlueprintCallable)
    static bool Blueprint_PredictProjectilePath_ByObjectType(const UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    
    UFUNCTION(BlueprintCallable)
    static bool Blueprint_PredictProjectilePath_Advanced(const UObject* WorldContextObject, const FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BeginSpawningActorFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, bool bNoCollisionFail, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BeginSpawningActorFromBlueprint(const UObject* WorldContextObject, const UBlueprint* Blueprint, const FTransform& SpawnTransform, bool bNoCollisionFail);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    
    UFUNCTION(BlueprintPure)
    static bool AreSubtitlesEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool AreAnyListenersWithinRange(const UObject* WorldContextObject, const FVector& Location, float MaximumRange);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static float ApplyPointDamage(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static float ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    static void AnnounceAccessibleString(const FString& AnnouncementString);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateReverbEffect(const UObject* WorldContextObject, UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime);
    
};

