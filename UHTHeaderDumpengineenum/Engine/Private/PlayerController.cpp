#include "PlayerController.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "CheatManager.h"

class UCameraShakeBase;
class AActor;
class UUserWidget;
class USceneComponent;
class UTouchInterface;
class UMaterialInterface;
class UCameraAnim;
class APawn;
class UHapticFeedbackEffect_Base;
class UForceFeedbackEffect;
class ASpectatorPawn;
class AHUD;
class APlayerState;
class UCameraShakeSourceComponent;
class AEmitterCameraLensEffectBase;
class UObject;
class ULocalMessage;
class USoundBase;

bool APlayerController::WasInputKeyJustReleased(FKey Key) const {
    return false;
}

bool APlayerController::WasInputKeyJustPressed(FKey Key) const {
    return false;
}

void APlayerController::ToggleSpeaking(bool bInSpeaking) {
}

void APlayerController::TestServerLevelVisibilityChange(const FName PackageName, const FName Filename) {
}

void APlayerController::SwitchLevel(const FString& URL) {
}

void APlayerController::StopHapticEffect(EControllerHand Hand) {
}

void APlayerController::StartFire(uint8 FireModeNum) {
}

void APlayerController::SetVirtualJoystickVisibility(bool bVisible) {
}

void APlayerController::SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
}

void APlayerController::SetName(const FString& S) {
}

void APlayerController::SetMouseLocation(const int32 X, const int32 Y) {
}

void APlayerController::SetMouseCursorWidget(TEnumAsByte<EMouseCursor::Type> Cursor, UUserWidget* CursorWidget) {
}

void APlayerController::SetHapticsByValue(const float Frequency, const float Amplitude, EControllerHand Hand) {
}

void APlayerController::SetDisableHaptics(bool bNewDisabled) {
}

void APlayerController::SetControllerLightColor(FColor Color) {
}

void APlayerController::SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}

void APlayerController::SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation) {
}

void APlayerController::SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride) {
}

void APlayerController::ServerViewSelf_Implementation(FViewTargetTransitionParams TransitionParams) {
}
bool APlayerController::ServerViewSelf_Validate(FViewTargetTransitionParams TransitionParams) {
    return true;
}

void APlayerController::ServerViewPrevPlayer_Implementation() {
}
bool APlayerController::ServerViewPrevPlayer_Validate() {
    return true;
}

void APlayerController::ServerViewNextPlayer_Implementation() {
}
bool APlayerController::ServerViewNextPlayer_Validate() {
    return true;
}

void APlayerController::ServerVerifyViewTarget_Implementation() {
}
bool APlayerController::ServerVerifyViewTarget_Validate() {
    return true;
}

void APlayerController::ServerUpdateMultipleLevelsVisibility_Implementation(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
}
bool APlayerController::ServerUpdateMultipleLevelsVisibility_Validate(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
    return true;
}

void APlayerController::ServerUpdateLevelVisibility_Implementation(const FUpdateLevelVisibilityLevelInfo& LevelVisibility) {
}
bool APlayerController::ServerUpdateLevelVisibility_Validate(const FUpdateLevelVisibilityLevelInfo& LevelVisibility) {
    return true;
}

void APlayerController::ServerUpdateCamera_Implementation(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw) {
}
bool APlayerController::ServerUpdateCamera_Validate(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw) {
    return true;
}

void APlayerController::ServerUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}
bool APlayerController::ServerUnmutePlayer_Validate(FUniqueNetIdRepl PlayerId) {
    return true;
}

void APlayerController::ServerToggleAILogging_Implementation() {
}
bool APlayerController::ServerToggleAILogging_Validate() {
    return true;
}

void APlayerController::ServerShortTimeout_Implementation() {
}
bool APlayerController::ServerShortTimeout_Validate() {
    return true;
}

void APlayerController::ServerSetSpectatorWaiting_Implementation(bool bWaiting) {
}
bool APlayerController::ServerSetSpectatorWaiting_Validate(bool bWaiting) {
    return true;
}

void APlayerController::ServerSetSpectatorLocation_Implementation(FVector NewLoc, FRotator NewRot) {
}
bool APlayerController::ServerSetSpectatorLocation_Validate(FVector NewLoc, FRotator NewRot) {
    return true;
}

void APlayerController::ServerRestartPlayer_Implementation() {
}
bool APlayerController::ServerRestartPlayer_Validate() {
    return true;
}

void APlayerController::ServerPause_Implementation() {
}
bool APlayerController::ServerPause_Validate() {
    return true;
}

void APlayerController::ServerNotifyLoadedWorld_Implementation(FName WorldPackageName) {
}
bool APlayerController::ServerNotifyLoadedWorld_Validate(FName WorldPackageName) {
    return true;
}

void APlayerController::ServerMutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}
bool APlayerController::ServerMutePlayer_Validate(FUniqueNetIdRepl PlayerId) {
    return true;
}

void APlayerController::ServerExecRPC_Implementation(const FString& Msg) {
}
bool APlayerController::ServerExecRPC_Validate(const FString& Msg) {
    return true;
}

void APlayerController::ServerExec(const FString& Msg) {
}

void APlayerController::ServerCheckClientPossessionReliable_Implementation() {
}
bool APlayerController::ServerCheckClientPossessionReliable_Validate() {
    return true;
}

void APlayerController::ServerCheckClientPossession_Implementation() {
}
bool APlayerController::ServerCheckClientPossession_Validate() {
    return true;
}

void APlayerController::ServerChangeName_Implementation(const FString& S) {
}
bool APlayerController::ServerChangeName_Validate(const FString& S) {
    return true;
}

void APlayerController::ServerCamera_Implementation(FName NewMode) {
}
bool APlayerController::ServerCamera_Validate(FName NewMode) {
    return true;
}

void APlayerController::ServerAcknowledgePossession_Implementation(APawn* P) {
}
bool APlayerController::ServerAcknowledgePossession_Validate(APawn* P) {
    return true;
}

void APlayerController::SendToConsole(const FString& Command) {
}

void APlayerController::RestartLevel() {
}

void APlayerController::ResetControllerLightColor() {
}

bool APlayerController::ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative) const {
    return false;
}

void APlayerController::PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop) {
}

void APlayerController::PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction::Type> Action, FLatentActionInfo LatentInfo) {
}

void APlayerController::Pause() {
}

void APlayerController::OnServerStartedVisualLogger_Implementation(bool bIsLogging) {
}

void APlayerController::LocalTravel(const FString& URL) {
}

void APlayerController::K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}

bool APlayerController::IsInputKeyDown(FKey Key) const {
    return false;
}

void APlayerController::GetViewportSize(int32& SizeX, int32& SizeY) const {
}

ASpectatorPawn* APlayerController::GetSpectatorPawn() const {
    return NULL;
}

bool APlayerController::GetMousePosition(float& LocationX, float& LocationY) const {
    return false;
}

FVector APlayerController::GetInputVectorKeyState(FKey Key) const {
    return FVector{};
}

void APlayerController::GetInputTouchState(TEnumAsByte<ETouchIndex::Type> FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const {
}

void APlayerController::GetInputMouseDelta(float& DeltaX, float& DeltaY) const {
}

void APlayerController::GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration) const {
}

float APlayerController::GetInputKeyTimeDown(FKey Key) const {
    return 0.0f;
}

void APlayerController::GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const {
}

float APlayerController::GetInputAnalogKeyState(FKey Key) const {
    return 0.0f;
}

AHUD* APlayerController::GetHUD() const {
    return NULL;
}

bool APlayerController::GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex::Type> FingerIndex, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

bool APlayerController::GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

bool APlayerController::GetHitResultUnderFinger(TEnumAsByte<ETouchIndex::Type> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

bool APlayerController::GetHitResultUnderCursorForObjects(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

bool APlayerController::GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

bool APlayerController::GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& HitResult) const {
    return false;
}

FVector APlayerController::GetFocalLocation() const {
    return FVector{};
}

void APlayerController::FOV(float NewFOV) {
}

void APlayerController::EnableCheats() {
}

bool APlayerController::DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection) const {
    return false;
}

bool APlayerController::DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection) const {
    return false;
}

void APlayerController::ConsoleKey(FKey Key) {
}

void APlayerController::ClientWasKicked_Implementation(const FText& KickReason) {
}

void APlayerController::ClientVoiceHandshakeComplete_Implementation() {
}

void APlayerController::ClientUpdateMultipleLevelsStreamingStatus_Implementation(const TArray<FUpdateLevelStreamingLevelStatus>& LevelStatuses) {
}

void APlayerController::ClientUpdateLevelStreamingStatus_Implementation(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex) {
}

void APlayerController::ClientUnmutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}

void APlayerController::ClientTravelInternal_Implementation(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid) {
}

void APlayerController::ClientTravel(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, FGuid MapPackageGuid) {
}

void APlayerController::ClientTeamMessage_Implementation(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime) {
}

void APlayerController::ClientStopForceFeedback_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) {
}

void APlayerController::ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
}

void APlayerController::ClientStopCameraShake_Implementation(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately) {
}

void APlayerController::ClientStopCameraAnim_Implementation(UCameraAnim* AnimToStop) {
}

void APlayerController::ClientStartOnlineSession_Implementation() {
}

void APlayerController::ClientStartCameraShakeFromSource(TSubclassOf<UCameraShakeBase> Shake, UCameraShakeSourceComponent* SourceComponent) {
}

void APlayerController::ClientStartCameraShake_Implementation(TSubclassOf<UCameraShakeBase> Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
}

void APlayerController::ClientSpawnCameraLensEffect_Implementation(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass) {
}

void APlayerController::ClientSetViewTarget_Implementation(AActor* A, FViewTargetTransitionParams TransitionParams) {
}

void APlayerController::ClientSetSpectatorWaiting_Implementation(bool bWaiting) {
}

void APlayerController::ClientSetHUD_Implementation(TSubclassOf<AHUD> NewHUDClass) {
}

void APlayerController::ClientSetForceMipLevelsToBeResident_Implementation(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups) {
}

void APlayerController::ClientSetCinematicMode_Implementation(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) {
}

void APlayerController::ClientSetCameraMode_Implementation(FName NewCamMode) {
}

void APlayerController::ClientSetCameraFade_Implementation(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished) {
}

void APlayerController::ClientSetBlockOnAsyncLoading_Implementation() {
}

void APlayerController::ClientReturnToMainMenuWithTextReason_Implementation(const FText& ReturnReason) {
}

void APlayerController::ClientReturnToMainMenu_Implementation(const FString& ReturnReason) {
}

void APlayerController::ClientRetryClientRestart_Implementation(APawn* NewPawn) {
}

void APlayerController::ClientRestart_Implementation(APawn* NewPawn) {
}

void APlayerController::ClientReset_Implementation() {
}

void APlayerController::ClientRepObjRef_Implementation(UObject* Object) {
}

void APlayerController::ClientReceiveLocalizedMessage_Implementation(TSubclassOf<ULocalMessage> Message, int32 SWITCH, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject) {
}

void APlayerController::ClientPrestreamTextures_Implementation(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups) {
}

void APlayerController::ClientPrepareMapChange_Implementation(FName LevelName, bool bFirst, bool bLast) {
}

void APlayerController::ClientPlaySoundAtLocation_Implementation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier) {
}

void APlayerController::ClientPlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
}

void APlayerController::ClientPlayForceFeedback_Internal_Implementation(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params) {
}

void APlayerController::ClientPlayCameraAnim_Implementation(UCameraAnim* AnimToPlay, float Scale, float Rate, float blendInTime, float blendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, FRotator CustomPlaySpace) {
}

void APlayerController::ClientMutePlayer_Implementation(FUniqueNetIdRepl PlayerId) {
}

void APlayerController::ClientMessage_Implementation(const FString& S, FName Type, float MsgLifeTime) {
}

void APlayerController::ClientIgnoreMoveInput_Implementation(bool bIgnore) {
}

void APlayerController::ClientIgnoreLookInput_Implementation(bool bIgnore) {
}

void APlayerController::ClientGotoState_Implementation(FName NewState) {
}

void APlayerController::ClientGameEnded_Implementation(AActor* EndGameFocus, bool bIsWinner) {
}

void APlayerController::ClientForceGarbageCollection_Implementation() {
}

void APlayerController::ClientFlushLevelStreaming_Implementation() {
}

void APlayerController::ClientEndOnlineSession_Implementation() {
}

void APlayerController::ClientEnableNetworkVoice_Implementation(bool bEnable) {
}

void APlayerController::ClientCommitMapChange_Implementation() {
}

void APlayerController::ClientClearCameraLensEffects_Implementation() {
}

void APlayerController::ClientCapBandwidth_Implementation(int32 Cap) {
}

void APlayerController::ClientCancelPendingMapChange_Implementation() {
}

void APlayerController::ClientAddTextureStreamingLoc_Implementation(FVector InLoc, float Duration, bool bOverrideLocation) {
}

void APlayerController::ClearAudioListenerOverride() {
}

void APlayerController::ClearAudioListenerAttenuationOverride() {
}

bool APlayerController::CanRestartPlayer() {
    return false;
}

void APlayerController::Camera(FName NewMode) {
}

void APlayerController::AddYawInput(float Val) {
}

void APlayerController::AddRollInput(float Val) {
}

void APlayerController::AddPitchInput(float Val) {
}

void APlayerController::ActivateTouchInterface(UTouchInterface* NewTouchInterface) {
}

void APlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerController, TargetViewRotation);
    DOREPLIFETIME(APlayerController, SpawnLocation);
}

APlayerController::APlayerController() {
    this->Player = NULL;
    this->AcknowledgedPawn = NULL;
    this->ControllingDirTrackInst = NULL;
    this->MyHUD = NULL;
    this->PlayerCameraManager = NULL;
    this->PlayerCameraManagerClass = NULL;
    this->bAutoManageActiveCameraTarget = true;
    this->SmoothTargetViewRotationSpeed = 20.00f;
    this->LastSpectatorStateSynchTime = 0.00f;
    this->ClientCap = 0;
    this->CheatManager = NULL;
    this->CheatClass = UCheatManager::StaticClass();
    this->PlayerInput = NULL;
    this->bPlayerIsWaiting = false;
    this->NetPlayerIndex = 0;
    this->PendingSwapConnection = NULL;
    this->NetConnection = NULL;
    this->InputYawScale = 2.50f;
    this->InputPitchScale = -2.50f;
    this->InputRollScale = 1.00f;
    this->bShowMouseCursor = false;
    this->bEnableClickEvents = false;
    this->bEnableTouchEvents = true;
    this->bEnableMouseOverEvents = false;
    this->bEnableTouchOverEvents = false;
    this->bForceFeedbackEnabled = true;
    this->ForceFeedbackScale = 1.00f;
    this->ClickEventKeys.AddDefaulted(1);
    this->DefaultMouseCursor = EMouseCursor::Default;
    this->CurrentMouseCursor = EMouseCursor::None;
    this->DefaultClickTraceChannel = ECC_Visibility;
    this->CurrentClickTraceChannel = ECC_WorldStatic;
    this->HitResultTraceDistance = 100000.00f;
    this->SeamlessTravelCount = 0;
    this->LastCompletedSeamlessTravelCount = 0;
    this->InactiveStateInputComponent = NULL;
    this->bShouldPerformFullTickWhenPaused = false;
    this->CurrentTouchInterface = NULL;
    this->SpectatorPawn = NULL;
    this->bIsLocalPlayerController = false;
}

