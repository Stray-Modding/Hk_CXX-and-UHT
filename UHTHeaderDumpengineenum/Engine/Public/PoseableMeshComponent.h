#pragma once
#include "CoreMinimal.h"
#include "SkinnedMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBoneSpaces.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "PoseableMeshComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPoseableMeshComponent : public USkinnedMeshComponent {
    GENERATED_BODY()
public:
    UPoseableMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetBoneTransformByName(FName BoneName, const FTransform& InTransform, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneScaleByName(FName BoneName, FVector InScale3D, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneRotationByName(FName BoneName, FRotator InRotation, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneLocationByName(FName BoneName, FVector InLocation, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void ResetBoneTransformByName(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneTransformByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    FVector GetBoneScaleByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetBoneRotationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    FVector GetBoneLocationByName(FName BoneName, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    void CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy);
    
};

