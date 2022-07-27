#include "PlayerCameraManager.h"
#include "Templates/SubclassOf.h"
#include "SceneComponent.h"

class UCameraShakeBase;
class UCameraAnimInst;
class UCameraShakeSourceComponent;
class UCameraAnim;
class UCameraModifier;
class AEmitterCameraLensEffectBase;
class APlayerController;

void APlayerCameraManager::SwapPendingViewTargetWhenUsingClientSideCameraUpdates() {
}

void APlayerCameraManager::StopCameraShake(UCameraShakeBase* ShakeInstance, bool bImmediately) {
}

void APlayerCameraManager::StopCameraFade() {
}

void APlayerCameraManager::StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate) {
}

void APlayerCameraManager::StopAllInstancesOfCameraShakeFromSource(TSubclassOf<UCameraShakeBase> Shake, UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
}

void APlayerCameraManager::StopAllInstancesOfCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately) {
}

void APlayerCameraManager::StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate) {
}

void APlayerCameraManager::StopAllCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
}

void APlayerCameraManager::StopAllCameraShakes(bool bImmediately) {
}

void APlayerCameraManager::StopAllCameraAnims(bool bImmediate) {
}

UCameraShakeBase* APlayerCameraManager::StartCameraShakeFromSource(TSubclassOf<UCameraShakeBase> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

UCameraShakeBase* APlayerCameraManager::StartCameraShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

void APlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
}

void APlayerCameraManager::SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio) {
}

void APlayerCameraManager::SetGameCameraCutThisFrame() {
}

bool APlayerCameraManager::RemoveCameraModifier(UCameraModifier* ModifierToRemove) {
    return false;
}

void APlayerCameraManager::RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter) {
}

UCameraAnimInst* APlayerCameraManager::PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float blendInTime, float blendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

void APlayerCameraManager::PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation) {
}

void APlayerCameraManager::OnPhotographySessionStart_Implementation() {
}

void APlayerCameraManager::OnPhotographySessionEnd_Implementation() {
}

void APlayerCameraManager::OnPhotographyMultiPartCaptureStart_Implementation() {
}

void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd_Implementation() {
}

APlayerController* APlayerCameraManager::GetOwningPlayerController() const {
    return NULL;
}

float APlayerCameraManager::GetFOVAngle() const {
    return 0.0f;
}

FRotator APlayerCameraManager::GetCameraRotation() const {
    return FRotator{};
}

FVector APlayerCameraManager::GetCameraLocation() const {
    return FVector{};
}

UCameraModifier* APlayerCameraManager::FindCameraModifierByClass(TSubclassOf<UCameraModifier> ModifierClass) {
    return NULL;
}

void APlayerCameraManager::ClearCameraLensEffects() {
}


UCameraModifier* APlayerCameraManager::AddNewCameraModifier(TSubclassOf<UCameraModifier> ModifierClass) {
    return NULL;
}

AEmitterCameraLensEffectBase* APlayerCameraManager::AddCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass) {
    return NULL;
}

APlayerCameraManager::APlayerCameraManager() {
    this->PCOwner = NULL;
    this->TransformComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent0"));
    this->DefaultFOV = 90.00f;
    this->DefaultOrthoWidth = 512.00f;
    this->DefaultAspectRatio = 1.33f;
    this->DefaultModifiers.AddDefaulted(1);
    this->FreeCamDistance = 256.00f;
    this->CachedCameraShakeMod = NULL;
    this->AnimInstPool[0] = NULL;
    this->AnimInstPool[1] = NULL;
    this->AnimInstPool[2] = NULL;
    this->AnimInstPool[3] = NULL;
    this->AnimInstPool[4] = NULL;
    this->AnimInstPool[5] = NULL;
    this->AnimInstPool[6] = NULL;
    this->AnimInstPool[7] = NULL;
    this->AnimCameraActor = NULL;
    this->bIsOrthographic = false;
    this->bDefaultConstrainAspectRatio = false;
    this->bClientSimulatingViewTarget = false;
    this->bUseClientSideCameraUpdates = true;
    this->bGameCameraCutThisFrame = false;
    this->ViewPitchMin = -89.90f;
    this->ViewPitchMax = 89.90f;
    this->ViewYawMin = 0.00f;
    this->ViewYawMax = 360.00f;
    this->ViewRollMin = -89.90f;
    this->ViewRollMax = 89.90f;
    this->ServerUpdateCameraTimeout = 2.00f;
}

