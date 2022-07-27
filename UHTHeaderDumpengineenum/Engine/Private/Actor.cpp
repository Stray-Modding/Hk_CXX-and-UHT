#include "Actor.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class UMaterialInstanceDynamic;
class APawn;
class AController;
class UMaterialInterface;
class UActorComponent;
class USceneComponent;
class UChildActorComponent;
class UPrimitiveComponent;
class APlayerController;
class UInterface;
class IInterface;
class UObject;

bool AActor::WasRecentlyRendered(float Tolerance) const {
    return false;
}


void AActor::TearOff() {
}

void AActor::SnapRootComponentTo(AActor* InParentActor, FName InSocketName) {
}

void AActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup) {
}

void AActor::SetTickableWhenPaused(bool bTickableWhenPaused) {
}

void AActor::SetReplicates(bool bInReplicates) {
}

void AActor::SetReplicateMovement(bool bInReplicateMovement) {
}

void AActor::SetOwner(AActor* NewOwner) {
}

void AActor::SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy) {
}

void AActor::SetLifeSpan(float InLifespan) {
}

void AActor::SetAutoDestroyWhenFinished(bool bVal) {
}

void AActor::SetActorTickInterval(float TickInterval) {
}

void AActor::SetActorTickEnabled(bool bEnabled) {
}

void AActor::SetActorScale3D(FVector NewScale3D) {
}

void AActor::SetActorRelativeScale3D(FVector NewRelativeScale) {
}

void AActor::SetActorHiddenInGame(bool bNewHidden) {
}

void AActor::SetActorEnableCollision(bool bNewActorEnableCollision) {
}

void AActor::RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
}

void AActor::RemoveTickPrerequisiteActor(AActor* PrerequisiteActor) {
}



















void AActor::PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups) {
}

void AActor::OnRep_ReplicateMovement() {
}

void AActor::OnRep_ReplicatedMovement() {
}

void AActor::OnRep_Owner() {
}

void AActor::OnRep_Instigator() {
}

void AActor::OnRep_AttachmentReplication() {
}

void AActor::MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag) {
}

UMaterialInstanceDynamic* AActor::MakeMIDForMaterial(UMaterialInterface* Parent) {
    return NULL;
}

bool AActor::K2_TeleportTo(FVector DestLocation, FRotator DestRotation) {
    return false;
}

bool AActor::K2_SetActorTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    return false;
}

bool AActor::K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics) {
    return false;
}

void AActor::K2_SetActorRelativeTransform(const FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

bool AActor::K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    return false;
}

bool AActor::K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
    return false;
}




USceneComponent* AActor::K2_GetRootComponent() const {
    return NULL;
}

TArray<UActorComponent*> AActor::K2_GetComponentsByClass(TSubclassOf<UActorComponent> ComponentClass) const {
    return TArray<UActorComponent*>();
}

FRotator AActor::K2_GetActorRotation() const {
    return FRotator{};
}

FVector AActor::K2_GetActorLocation() const {
    return FVector{};
}

void AActor::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule) {
}

void AActor::K2_DestroyComponent(UActorComponent* Component) {
}

void AActor::K2_DestroyActor() {
}

void AActor::K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}

void AActor::K2_AttachToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}

void AActor::K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies) {
}

void AActor::K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies) {
}

void AActor::K2_AddActorWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_AddActorWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_AddActorLocalTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

void AActor::K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport) {
}

bool AActor::IsOverlappingActor(const AActor* Other) const {
    return false;
}

bool AActor::IsChildActor() const {
    return false;
}

bool AActor::IsActorTickEnabled() const {
    return false;
}

bool AActor::IsActorBeingDestroyed() const {
    return false;
}

bool AActor::HasAuthority() const {
    return false;
}

float AActor::GetVerticalDistanceTo(const AActor* OtherActor) const {
    return 0.0f;
}

FVector AActor::GetVelocity() const {
    return FVector{};
}

FTransform AActor::GetTransform() const {
    return FTransform{};
}

bool AActor::GetTickableWhenPaused() {
    return false;
}

float AActor::GetSquaredHorizontalDistanceTo(const AActor* OtherActor) const {
    return 0.0f;
}

float AActor::GetSquaredDistanceTo(const AActor* OtherActor) const {
    return 0.0f;
}

TEnumAsByte<ENetRole> AActor::GetRemoteRole() const {
    return ROLE_None;
}

UChildActorComponent* AActor::GetParentComponent() const {
    return NULL;
}

AActor* AActor::GetParentActor() const {
    return NULL;
}

AActor* AActor::GetOwner() const {
    return NULL;
}

void AActor::GetOverlappingComponents(TArray<UPrimitiveComponent*>& OverlappingComponents) const {
}

void AActor::GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const {
}

TEnumAsByte<ENetRole> AActor::GetLocalRole() const {
    return ROLE_None;
}

float AActor::GetLifeSpan() const {
    return 0.0f;
}

AController* AActor::GetInstigatorController() const {
    return NULL;
}

APawn* AActor::GetInstigator() const {
    return NULL;
}

FVector AActor::GetInputVectorAxisValue(const FKey InputAxisKey) const {
    return FVector{};
}

float AActor::GetInputAxisValue(const FName InputAxisName) const {
    return 0.0f;
}

float AActor::GetInputAxisKeyValue(const FKey InputAxisKey) const {
    return 0.0f;
}

float AActor::GetHorizontalDotProductTo(const AActor* OtherActor) const {
    return 0.0f;
}

float AActor::GetHorizontalDistanceTo(const AActor* OtherActor) const {
    return 0.0f;
}

float AActor::GetGameTimeSinceCreation() const {
    return 0.0f;
}

float AActor::GetDotProductTo(const AActor* OtherActor) const {
    return 0.0f;
}

float AActor::GetDistanceTo(const AActor* OtherActor) const {
    return 0.0f;
}

TArray<UActorComponent*> AActor::GetComponentsByTag(TSubclassOf<UActorComponent> ComponentClass, FName Tag) const {
    return TArray<UActorComponent*>();
}

TArray<UActorComponent*> AActor::GetComponentsByInterface(TSubclassOf<UInterface> Interface) const {
    return TArray<UActorComponent*>();
}

UActorComponent* AActor::GetComponentByClass(TSubclassOf<UActorComponent> ComponentClass) const {
    return NULL;
}

FName AActor::GetAttachParentSocketName() const {
    return NAME_None;
}

AActor* AActor::GetAttachParentActor() const {
    return NULL;
}

void AActor::GetAttachedActors(TArray<AActor*>& OutActors, bool bResetArray) const {
}

void AActor::GetAllChildActors(TArray<AActor*>& ChildActors, bool bIncludeDescendants) const {
}

FVector AActor::GetActorUpVector() const {
    return FVector{};
}

float AActor::GetActorTimeDilation() const {
    return 0.0f;
}

float AActor::GetActorTickInterval() const {
    return 0.0f;
}

FVector AActor::GetActorScale3D() const {
    return FVector{};
}

FVector AActor::GetActorRightVector() const {
    return FVector{};
}

FVector AActor::GetActorRelativeScale3D() const {
    return FVector{};
}

FVector AActor::GetActorForwardVector() const {
    return FVector{};
}

void AActor::GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const {
}

bool AActor::GetActorEnableCollision() const {
    return false;
}

void AActor::GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors) const {
}

void AActor::ForceNetUpdate() {
}

void AActor::FlushNetDormancy() {
}

void AActor::FinishAddComponent(UActorComponent* Component, bool bManualAttachment, const FTransform& RelativeTransform) {
}

void AActor::EnableInput(APlayerController* PlayerController) {
}

void AActor::DisableInput(APlayerController* PlayerController) {
}

void AActor::DetachRootComponentFromParent(bool bMaintainWorldPosition) {
}

void AActor::AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent) {
}

void AActor::AddTickPrerequisiteActor(AActor* PrerequisiteActor) {
}

UActorComponent* AActor::AddComponentByClass(TSubclassOf<UActorComponent> Class, bool bManualAttachment, const FTransform& RelativeTransform, bool bDeferredFinish) {
    return NULL;
}

UActorComponent* AActor::AddComponent(FName TemplateName, bool bManualAttachment, const FTransform& RelativeTransform, const UObject* ComponentTemplateContext, bool bDeferredFinish) {
    return NULL;
}

bool AActor::ActorHasTag(FName Tag) const {
    return false;
}

void AActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AActor, bReplicateMovement);
    DOREPLIFETIME(AActor, bHidden);
    DOREPLIFETIME(AActor, bTearOff);
    DOREPLIFETIME(AActor, bCanBeDamaged);
    DOREPLIFETIME(AActor, RemoteRole);
    DOREPLIFETIME(AActor, ReplicatedMovement);
    DOREPLIFETIME(AActor, AttachmentReplication);
    DOREPLIFETIME(AActor, Owner);
    DOREPLIFETIME(AActor, Role);
    DOREPLIFETIME(AActor, Instigator);
}

AActor::AActor() {
    this->bNetTemporary = false;
    this->bNetStartup = false;
    this->bOnlyRelevantToOwner = false;
    this->bAlwaysRelevant = false;
    this->bReplicateMovement = false;
    this->bHidden = false;
    this->bTearOff = false;
    this->bForceNetAddressable = false;
    this->bExchangedRoles = false;
    this->bNetLoadOnClient = true;
    this->bNetUseOwnerRelevancy = false;
    this->bRelevantForNetworkReplays = true;
    this->bRelevantForLevelBounds = true;
    this->bReplayRewindable = false;
    this->bAllowTickBeforeBeginPlay = false;
    this->bAutoDestroyWhenFinished = false;
    this->bCanBeDamaged = true;
    this->bBlockInput = false;
    this->bCollideWhenPlacing = false;
    this->bFindCameraComponentWhenViewTarget = true;
    this->bGenerateOverlapEventsDuringLevelStreaming = false;
    this->bIgnoresOriginShifting = false;
    this->bEnableAutoLODGeneration = false;
    this->bIsEditorOnlyActor = false;
    this->bActorSeamlessTraveled = false;
    this->bReplicates = false;
    this->bCanBeInCluster = false;
    this->bAllowReceiveTickEventOnDedicatedServer = true;
    this->bActorEnableCollision = true;
    this->bActorIsBeingDestroyed = false;
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::UseConfigDefault;
    this->DefaultUpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
    this->RemoteRole = ROLE_None;
    this->InitialLifeSpan = 0.00f;
    this->CustomTimeDilation = 1.00f;
    this->Owner = NULL;
    this->NetDriverName = TEXT("GameNetDriver");
    this->Role = ROLE_Authority;
    this->NetDormancy = DORM_Awake;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->AutoReceiveInput = EAutoReceiveInput::Disabled;
    this->InputPriority = 0;
    this->InputComponent = NULL;
    this->NetCullDistanceSquared = 225000000.00f;
    this->NetTag = 0;
    this->NetUpdateFrequency = 100.00f;
    this->MinNetUpdateFrequency = 2.00f;
    this->NetPriority = 1.00f;
    this->Instigator = NULL;
    this->RootComponent = NULL;
}

