#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EObjectTypeQuery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "UpdateLevelVisibilityLevelInfo.h"
#include "Controller.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActiveForceFeedbackEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
#include "ECollisionChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "EViewTargetBlendFunction.h"
#include "EDynamicForceFeedbackAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ViewTargetTransitionParams.h"
#include "UpdateLevelStreamingLevelStatus.h"
#include "Vector_NetQuantize.h"
#include "UniqueNetIdRepl.h"
#include "ETraceTypeQuery.h"
#include "LatentActionInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
#include "EControllerAnalogStick.h"
#include "HitResult.h"
#include "ETravelType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ECameraShakePlaySpace.h"
#include "ForceFeedbackParameters.h"
#include "PlayerController.generated.h"

class UMaterialInterface;
class UCameraAnim;
class UTouchInterface;
class UPlayer;
class UInputComponent;
class APlayerCameraManager;
class AHUD;
class UNetConnection;
class APawn;
class UInterpTrackInstDirector;
class AActor;
class UPrimitiveComponent;
class UCheatManager;
class UHapticFeedbackEffect_Base;
class UPlayerInput;
class ASpectatorPawn;
class UCameraShakeBase;
class UUserWidget;
class USceneComponent;
class UForceFeedbackEffect;
class APlayerState;
class UCameraShakeSourceComponent;
class AEmitterCameraLensEffectBase;
class UObject;
class ULocalMessage;
class USoundBase;

UCLASS(Config=Game)
class ENGINE_API APlayerController : public AController {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPlayer* Player;
    
    UPROPERTY()
    APawn* AcknowledgedPawn;
    
    UPROPERTY(Transient)
    UInterpTrackInstDirector* ControllingDirTrackInst;
    
    UPROPERTY()
    AHUD* MyHUD;
    
    UPROPERTY(BlueprintReadOnly)
    APlayerCameraManager* PlayerCameraManager;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APlayerCameraManager> PlayerCameraManagerClass;
    
    UPROPERTY(EditAnywhere)
    bool bAutoManageActiveCameraTarget;
    
    UPROPERTY(Replicated)
    FRotator TargetViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothTargetViewRotationSpeed;
    
    UPROPERTY()
    TArray<AActor*> HiddenActors;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents;
    
    UPROPERTY()
    float LastSpectatorStateSynchTime;
    
    UPROPERTY(Transient)
    FVector LastSpectatorSyncLocation;
    
    UPROPERTY(Transient)
    FRotator LastSpectatorSyncRotation;
    
    UPROPERTY()
    int32 ClientCap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCheatManager* CheatManager;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCheatManager> CheatClass;
    
    UPROPERTY(Transient)
    UPlayerInput* PlayerInput;
    
    UPROPERTY(Transient)
    TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    uint8 bPlayerIsWaiting: 1;
    
    UPROPERTY(DuplicateTransient)
    uint8 NetPlayerIndex;
    
    UPROPERTY(DuplicateTransient)
    UNetConnection* PendingSwapConnection;
    
    UPROPERTY(DuplicateTransient)
    UNetConnection* NetConnection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float InputYawScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float InputPitchScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float InputRollScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShowMouseCursor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableClickEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableTouchEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableMouseOverEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableTouchOverEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bForceFeedbackEnabled: 1;
    
    UPROPERTY(Config)
    float ForceFeedbackScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> ClickEventKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMouseCursor::Type> DefaultMouseCursor;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EMouseCursor::Type> CurrentMouseCursor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HitResultTraceDistance;
    
    UPROPERTY()
    uint16 SeamlessTravelCount;
    
    UPROPERTY()
    uint16 LastCompletedSeamlessTravelCount;
    
protected:
    UPROPERTY(Export)
    UInputComponent* InactiveStateInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShouldPerformFullTickWhenPaused: 1;
    
    UPROPERTY()
    UTouchInterface* CurrentTouchInterface;
    
private:
    UPROPERTY()
    ASpectatorPawn* SpectatorPawn;
    
    UPROPERTY()
    bool bIsLocalPlayerController;
    
protected:
    UPROPERTY(Replicated)
    FVector SpawnLocation;
    
public:
    APlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool WasInputKeyJustReleased(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    bool WasInputKeyJustPressed(FKey Key) const;
    
    UFUNCTION(Exec)
    void ToggleSpeaking(bool bInSpeaking);
    
private:
    UFUNCTION(Exec)
    void TestServerLevelVisibilityChange(const FName PackageName, const FName Filename);
    
public:
    UFUNCTION(Exec)
    void SwitchLevel(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void StopHapticEffect(EControllerHand Hand);
    
    UFUNCTION(Exec)
    void StartFire(uint8 FireModeNum);
    
    UFUNCTION(BlueprintCallable)
    void SetVirtualJoystickVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    
    UFUNCTION(Exec)
    void SetName(const FString& S);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseLocation(const int32 X, const int32 Y);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseCursorWidget(TEnumAsByte<EMouseCursor::Type> Cursor, UUserWidget* CursorWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetHapticsByValue(const float Frequency, const float Amplitude, EControllerHand Hand);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableHaptics(bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLightColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerViewSelf(FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerViewPrevPlayer();
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerViewNextPlayer();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerVerifyViewTarget();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateMultipleLevelsVisibility(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateLevelVisibility(const FUpdateLevelVisibilityLevelInfo& LevelVisibility);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerUpdateCamera(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUnmutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerToggleAILogging();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerShortTimeout();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetSpectatorWaiting(bool bWaiting);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRestartPlayer();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPause();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyLoadedWorld(FName WorldPackageName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerMutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerExecRPC(const FString& Msg);
    
    UFUNCTION(Exec)
    void ServerExec(const FString& Msg);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheckClientPossessionReliable();
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerCheckClientPossession();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerChangeName(const FString& S);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCamera(FName NewMode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAcknowledgePossession(APawn* P);
    
    UFUNCTION(Exec)
    void SendToConsole(const FString& Command);
    
    UFUNCTION(Exec)
    void RestartLevel();
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerLightColor();
    
    UFUNCTION(BlueprintPure)
    bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative) const;
    
    UFUNCTION(BlueprintCallable)
    void PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction::Type> Action, FLatentActionInfo LatentInfo);
    
public:
    UFUNCTION(Exec)
    void Pause();
    
    UFUNCTION(Client, Reliable)
    void OnServerStartedVisualLogger(bool bIsLogging);
    
    UFUNCTION(Exec)
    void LocalTravel(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
    UFUNCTION(BlueprintPure)
    bool IsInputKeyDown(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    void GetViewportSize(int32& SizeX, int32& SizeY) const;
    
    UFUNCTION(BlueprintPure)
    ASpectatorPawn* GetSpectatorPawn() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMousePosition(float& LocationX, float& LocationY) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetInputVectorKeyState(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    void GetInputTouchState(TEnumAsByte<ETouchIndex::Type> FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const;
    
    UFUNCTION(BlueprintPure)
    void GetInputMouseDelta(float& DeltaX, float& DeltaY) const;
    
    UFUNCTION(BlueprintPure)
    void GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration) const;
    
    UFUNCTION(BlueprintPure)
    float GetInputKeyTimeDown(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const;
    
    UFUNCTION(BlueprintPure)
    float GetInputAnalogKeyState(FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    AHUD* GetHUD() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex::Type> FingerIndex, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFocalLocation() const;
    
    UFUNCTION(Exec)
    void FOV(float NewFOV);
    
    UFUNCTION(Exec)
    void EnableCheats();
    
    UFUNCTION(BlueprintPure)
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection) const;
    
    UFUNCTION(BlueprintPure)
    bool DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection) const;
    
    UFUNCTION(Exec)
    void ConsoleKey(FKey Key);
    
    UFUNCTION(Client, Reliable)
    void ClientWasKicked(const FText& KickReason);
    
    UFUNCTION(Client, Reliable)
    void ClientVoiceHandshakeComplete();
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateMultipleLevelsStreamingStatus(const TArray<FUpdateLevelStreamingLevelStatus>& LevelStatuses);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);
    
    UFUNCTION(Client, Reliable)
    void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientTravelInternal(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);
    
    UFUNCTION()
    void ClientTravel(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid);
    
    UFUNCTION(Client, Reliable)
    void ClientTeamMessage(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately);
    
    UFUNCTION(Client, Reliable)
    void ClientStopCameraAnim(UCameraAnim* AnimToStop);
    
    UFUNCTION(Client, Reliable)
    void ClientStartOnlineSession();
    
    UFUNCTION(BlueprintCallable)
    void ClientStartCameraShakeFromSource(TSubclassOf<UCameraShakeBase> Shake, UCameraShakeSourceComponent* SourceComponent);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientStartCameraShake(TSubclassOf<UCameraShakeBase> Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientSpawnCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass);
    
    UFUNCTION(Client, Reliable)
    void ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(Client, Reliable)
    void ClientSetSpectatorWaiting(bool bWaiting);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetHUD(TSubclassOf<AHUD> NewHUDClass);
    
    UFUNCTION(Client, Reliable)
    void ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);
    
    UFUNCTION(Client, Reliable)
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
    
    UFUNCTION(Client, Reliable)
    void ClientSetCameraMode(FName NewCamMode);
    
    UFUNCTION(Client, Reliable)
    void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);
    
    UFUNCTION(Client, Reliable)
    void ClientSetBlockOnAsyncLoading();
    
    UFUNCTION(Client, Reliable)
    void ClientReturnToMainMenuWithTextReason(const FText& ReturnReason);
    
    UFUNCTION(Client, Reliable)
    void ClientReturnToMainMenu(const FString& ReturnReason);
    
    UFUNCTION(Client, Reliable)
    void ClientRetryClientRestart(APawn* NewPawn);
    
    UFUNCTION(Client, Reliable)
    void ClientRestart(APawn* NewPawn);
    
    UFUNCTION(Client, Reliable)
    void ClientReset();
    
    UFUNCTION(Client, Reliable)
    void ClientRepObjRef(UObject* Object);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage> Message, int32 SWITCH, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject);
    
    UFUNCTION(Client, Reliable)
    void ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(Client, Reliable)
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);
    
    UFUNCTION(Client, Unreliable)
    void ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
    
    UFUNCTION(Client, Unreliable)
    void ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    
private:
    UFUNCTION(Client, Unreliable)
    void ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float blendInTime, float blendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, FRotator CustomPlaySpace);
    
    UFUNCTION(Client, Reliable)
    void ClientMutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(Client, Reliable)
    void ClientMessage(const FString& S, FName Type, float MsgLifeTime);
    
    UFUNCTION(Client, Reliable)
    void ClientIgnoreMoveInput(bool bIgnore);
    
    UFUNCTION(Client, Reliable)
    void ClientIgnoreLookInput(bool bIgnore);
    
    UFUNCTION(Client, Reliable)
    void ClientGotoState(FName NewState);
    
    UFUNCTION(Client, Reliable)
    void ClientGameEnded(AActor* EndGameFocus, bool bIsWinner);
    
    UFUNCTION(Client, Reliable)
    void ClientForceGarbageCollection();
    
    UFUNCTION(Client, Reliable)
    void ClientFlushLevelStreaming();
    
    UFUNCTION(Client, Reliable)
    void ClientEndOnlineSession();
    
    UFUNCTION(Client, Reliable)
    void ClientEnableNetworkVoice(bool bEnable);
    
    UFUNCTION(Client, Reliable)
    void ClientCommitMapChange();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearCameraLensEffects();
    
    UFUNCTION(Client, Reliable)
    void ClientCapBandwidth(int32 Cap);
    
    UFUNCTION(Client, Reliable)
    void ClientCancelPendingMapChange();
    
    UFUNCTION(Client, Reliable)
    void ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation);
    
    UFUNCTION(BlueprintCallable)
    void ClearAudioListenerOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearAudioListenerAttenuationOverride();
    
    UFUNCTION(BlueprintCallable)
    bool CanRestartPlayer();
    
    UFUNCTION(Exec)
    void Camera(FName NewMode);
    
    UFUNCTION(BlueprintCallable)
    void AddYawInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddRollInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddPitchInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void ActivateTouchInterface(UTouchInterface* NewTouchInterface);
    
};

