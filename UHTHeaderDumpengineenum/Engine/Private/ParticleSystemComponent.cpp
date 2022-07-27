#include "ParticleSystemComponent.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class UParticleSystem;
class USceneComponent;

void UParticleSystemComponent::SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth) {
}

void UParticleSystemComponent::SetTemplate(UParticleSystem* NewTemplate) {
}

void UParticleSystemComponent::SetMaterialParameter(FName ParameterName, UMaterialInterface* Param) {
}

void UParticleSystemComponent::SetBeamTargetTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 TargetIndex) {
}

void UParticleSystemComponent::SetBeamTargetStrength(int32 EmitterIndex, float NewTargetStrength, int32 TargetIndex) {
}

void UParticleSystemComponent::SetBeamTargetPoint(int32 EmitterIndex, FVector NewTargetPoint, int32 TargetIndex) {
}

void UParticleSystemComponent::SetBeamSourceTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 SourceIndex) {
}

void UParticleSystemComponent::SetBeamSourceStrength(int32 EmitterIndex, float NewSourceStrength, int32 SourceIndex) {
}

void UParticleSystemComponent::SetBeamSourcePoint(int32 EmitterIndex, FVector NewSourcePoint, int32 SourceIndex) {
}

void UParticleSystemComponent::SetBeamEndPoint(int32 EmitterIndex, FVector NewEndPoint) {
}

void UParticleSystemComponent::SetAutoAttachParams(USceneComponent* Parent, FName SocketName, TEnumAsByte<EAttachLocation::Type> LocationType) {
}

int32 UParticleSystemComponent::GetNumActiveParticles() const {
    return 0;
}

UMaterialInterface* UParticleSystemComponent::GetNamedMaterial(FName InName) const {
    return NULL;
}

bool UParticleSystemComponent::GetBeamTargetTangent(int32 EmitterIndex, int32 TargetIndex, FVector& OutTangentPoint) const {
    return false;
}

bool UParticleSystemComponent::GetBeamTargetStrength(int32 EmitterIndex, int32 TargetIndex, float& OutTargetStrength) const {
    return false;
}

bool UParticleSystemComponent::GetBeamTargetPoint(int32 EmitterIndex, int32 TargetIndex, FVector& OutTargetPoint) const {
    return false;
}

bool UParticleSystemComponent::GetBeamSourceTangent(int32 EmitterIndex, int32 SourceIndex, FVector& OutTangentPoint) const {
    return false;
}

bool UParticleSystemComponent::GetBeamSourceStrength(int32 EmitterIndex, int32 SourceIndex, float& OutSourceStrength) const {
    return false;
}

bool UParticleSystemComponent::GetBeamSourcePoint(int32 EmitterIndex, int32 SourceIndex, FVector& OutSourcePoint) const {
    return false;
}

bool UParticleSystemComponent::GetBeamEndPoint(int32 EmitterIndex, FVector& OutEndPoint) const {
    return false;
}

void UParticleSystemComponent::GenerateParticleEvent(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InDirection, const FVector InVelocity) {
}

void UParticleSystemComponent::EndTrails() {
}

UMaterialInstanceDynamic* UParticleSystemComponent::CreateNamedDynamicMaterialInstance(FName InName, UMaterialInterface* SourceMaterial) {
    return NULL;
}

void UParticleSystemComponent::BeginTrails(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth) {
}

UParticleSystemComponent::UParticleSystemComponent() {
    this->Template = NULL;
    this->bResetOnDetach = false;
    this->bUpdateOnDedicatedServer = false;
    this->bAllowRecycling = false;
    this->bAutoManageAttachment = false;
    this->bAutoAttachWeldSimulatedBodies = false;
    this->bWarmingUp = false;
    this->bOverrideLODMethod = false;
    this->bSkipUpdateDynamicDataDuringTick = false;
    this->LODMethod = PARTICLESYSTEMLODMETHOD_Automatic;
    this->RequiredSignificance = EParticleSignificanceLevel::Low;
    this->bOldPositionValid = false;
    this->WarmupTime = 0.00f;
    this->WarmupTickRate = 0.00f;
    this->SecondsBeforeInactive = 1.00f;
    this->MaxTimeBeforeForceUpdateTransform = 5.00f;
    this->CustomTimeDilation = 1.00f;
    this->AutoAttachLocationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachRotationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachScaleRule = EAttachmentRule::KeepRelative;
}

