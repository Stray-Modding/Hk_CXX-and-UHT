#include "SceneComponent.h"
#include "Net/UnrealNetwork.h"

class USceneComponent;
class APhysicsVolume;

void USceneComponent::ToggleVisibility(bool bPropagateToChildren) {
}

bool USceneComponent::SnapTo(USceneComponent* InParent, FName InSocketName) {
    return false;
}

void USceneComponent::SetWorldScale3D(FVector NewScale) {
}

void USceneComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
}

void USceneComponent::SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume) {
}

void USceneComponent::SetRelativeScale3D(FVector NewScale3D) {
}

void USceneComponent::SetMobility(TEnumAsByte<EComponentMobility::Type> NewMobility) {
}

void USceneComponent::SetHiddenInGame(bool NewHidden, bool bPropagateToChildren) {
}

void USceneComponent::SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {
}

void USceneComponent::ResetRelativeTransform() {
}

void USceneComponent::OnRep_Visibility(bool OldValue) {
}

void USceneComponent::OnRep_Transform() {
}

void USceneComponent::OnRep_AttachSocketName() {
}

void USceneComponent::OnRep_AttachParent() {
}

void USceneComponent::OnRep_AttachChildren() {
}

void USceneComponent::K2_SetWorldTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_SetRelativeTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

FTransform USceneComponent::K2_GetComponentToWorld() const {
    return FTransform{};
}

FVector USceneComponent::K2_GetComponentScale() const {
    return FVector{};
}

FRotator USceneComponent::K2_GetComponentRotation() const {
    return FRotator{};
}

FVector USceneComponent::K2_GetComponentLocation() const {
    return FVector{};
}

void USceneComponent::K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify) {
}

bool USceneComponent::K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
    return false;
}

bool USceneComponent::K2_AttachTo(USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachType, bool bWeldSimulatedBodies) {
    return false;
}

void USceneComponent::K2_AddWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddLocalTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void USceneComponent::K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

bool USceneComponent::IsVisible() const {
    return false;
}

bool USceneComponent::IsSimulatingPhysics(FName BoneName) const {
    return false;
}

bool USceneComponent::IsAnySimulatingPhysics() const {
    return false;
}

FVector USceneComponent::GetUpVector() const {
    return FVector{};
}

FTransform USceneComponent::GetSocketTransform(FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const {
    return FTransform{};
}

FRotator USceneComponent::GetSocketRotation(FName InSocketName) const {
    return FRotator{};
}

FQuat USceneComponent::GetSocketQuaternion(FName InSocketName) const {
    return FQuat{};
}

FVector USceneComponent::GetSocketLocation(FName InSocketName) const {
    return FVector{};
}

bool USceneComponent::GetShouldUpdatePhysicsVolume() const {
    return false;
}

FVector USceneComponent::GetRightVector() const {
    return FVector{};
}

FTransform USceneComponent::GetRelativeTransform() const {
    return FTransform{};
}

APhysicsVolume* USceneComponent::GetPhysicsVolume() const {
    return NULL;
}

void USceneComponent::GetParentComponents(TArray<USceneComponent*>& Parents) const {
}

int32 USceneComponent::GetNumChildrenComponents() const {
    return 0;
}

FVector USceneComponent::GetForwardVector() const {
    return FVector{};
}

FVector USceneComponent::GetComponentVelocity() const {
    return FVector{};
}

void USceneComponent::GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*>& Children) const {
}

USceneComponent* USceneComponent::GetChildComponent(int32 ChildIndex) const {
    return NULL;
}

FName USceneComponent::GetAttachSocketName() const {
    return NAME_None;
}

USceneComponent* USceneComponent::GetAttachParent() const {
    return NULL;
}

TArray<FName> USceneComponent::GetAllSocketNames() const {
    return TArray<FName>();
}

bool USceneComponent::DoesSocketExist(FName InSocketName) const {
    return false;
}

void USceneComponent::DetachFromParent(bool bMaintainWorldPosition, bool bCallModify) {
}

void USceneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USceneComponent, AttachParent);
    DOREPLIFETIME(USceneComponent, AttachSocketName);
    DOREPLIFETIME(USceneComponent, AttachChildren);
    DOREPLIFETIME(USceneComponent, RelativeLocation);
    DOREPLIFETIME(USceneComponent, RelativeRotation);
    DOREPLIFETIME(USceneComponent, RelativeScale3D);
    DOREPLIFETIME(USceneComponent, bAbsoluteLocation);
    DOREPLIFETIME(USceneComponent, bAbsoluteRotation);
    DOREPLIFETIME(USceneComponent, bAbsoluteScale);
    DOREPLIFETIME(USceneComponent, bVisible);
    DOREPLIFETIME(USceneComponent, bShouldBeAttached);
    DOREPLIFETIME(USceneComponent, bShouldSnapLocationWhenAttached);
    DOREPLIFETIME(USceneComponent, bShouldSnapRotationWhenAttached);
}

USceneComponent::USceneComponent() {
    this->AttachParent = NULL;
    this->bComponentToWorldUpdated = false;
    this->bAbsoluteLocation = false;
    this->bAbsoluteRotation = false;
    this->bAbsoluteScale = false;
    this->bVisible = true;
    this->bShouldBeAttached = false;
    this->bShouldSnapLocationWhenAttached = false;
    this->bShouldSnapRotationWhenAttached = false;
    this->bShouldUpdatePhysicsVolume = false;
    this->bHiddenInGame = false;
    this->bBoundsChangeTriggersStreamingDataRebuild = false;
    this->bUseAttachParentBound = false;
    this->Mobility = EComponentMobility::Movable;
    this->DetailMode = DM_Low;
}

