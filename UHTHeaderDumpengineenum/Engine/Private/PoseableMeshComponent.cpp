#include "PoseableMeshComponent.h"

class USkeletalMeshComponent;

void UPoseableMeshComponent::SetBoneTransformByName(FName BoneName, const FTransform& InTransform, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPoseableMeshComponent::SetBoneScaleByName(FName BoneName, FVector InScale3D, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPoseableMeshComponent::SetBoneRotationByName(FName BoneName, FRotator InRotation, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPoseableMeshComponent::SetBoneLocationByName(FName BoneName, FVector InLocation, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
}

void UPoseableMeshComponent::ResetBoneTransformByName(FName BoneName) {
}

FTransform UPoseableMeshComponent::GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FTransform{};
}

FVector UPoseableMeshComponent::GetBoneScaleByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FVector{};
}

FRotator UPoseableMeshComponent::GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FRotator{};
}

FVector UPoseableMeshComponent::GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace) {
    return FVector{};
}

void UPoseableMeshComponent::CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy) {
}

UPoseableMeshComponent::UPoseableMeshComponent() {
}

