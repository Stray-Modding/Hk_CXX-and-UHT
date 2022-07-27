#include "SkeletalMeshActor.h"
#include "Net/UnrealNetwork.h"
#include "SkeletalMeshComponent.h"

void ASkeletalMeshActor::OnRep_ReplicatedPhysAsset() {
}

void ASkeletalMeshActor::OnRep_ReplicatedMesh() {
}

void ASkeletalMeshActor::OnRep_ReplicatedMaterial1() {
}

void ASkeletalMeshActor::OnRep_ReplicatedMaterial0() {
}

void ASkeletalMeshActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASkeletalMeshActor, ReplicatedMesh);
    DOREPLIFETIME(ASkeletalMeshActor, ReplicatedPhysAsset);
    DOREPLIFETIME(ASkeletalMeshActor, ReplicatedMaterial0);
    DOREPLIFETIME(ASkeletalMeshActor, ReplicatedMaterial1);
}

ASkeletalMeshActor::ASkeletalMeshActor() {
    this->bShouldDoAnimNotifies = true;
    this->bWakeOnLevelStart = false;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
    this->ReplicatedMesh = NULL;
    this->ReplicatedPhysAsset = NULL;
    this->ReplicatedMaterial0 = NULL;
    this->ReplicatedMaterial1 = NULL;
}

