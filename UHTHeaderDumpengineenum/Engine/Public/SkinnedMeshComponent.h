#pragma once
#include "CoreMinimal.h"
#include "MeshComponent.h"
#include "SkelMeshComponentLODInfo.h"
#include "LODSyncInterface.h"
#include "ESkinCacheUsage.h"
#include "VertexOffsetUsage.h"
#include "EVisibilityBasedAnimTickOption.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SkelMeshSkinWeightInfo.h"
#include "EPhysBodyOp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SkinnedMeshComponent.generated.h"

class USkeletalMesh;
class USkinnedMeshComponent;
class UPhysicsAsset;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USkinnedMeshComponent : public UMeshComponent, public ILODSyncInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESkinCacheUsage> SkinCacheUsage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVertexOffsetUsage> VertexOffsetUsage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UPhysicsAsset* PhysicsAssetOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 ForcedLodModel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 MinLodModel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float StreamingDistanceMultiplier;
    
    UPROPERTY(Transient)
    TArray<FSkelMeshComponentLODInfo> LODInfo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, Interp)
    EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideMinLod: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseBoundsFromMasterPoseComponent: 1;
    
    UPROPERTY()
    uint8 bForceWireframe: 1;
    
    UPROPERTY()
    uint8 bDisplayBones: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bDisableMorphTarget: 1;
    
    UPROPERTY()
    uint8 bHideSkin: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bPerBoneMotionBlur: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bComponentUseFixedSkelBounds: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bConsiderAllBodiesForBounds: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bSyncAttachParentLOD: 1;
    
    UPROPERTY(Transient)
    uint8 bCanHighlightSelectedSections: 1;
    
    UPROPERTY(Transient)
    uint8 bRecentlyRendered: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastCapsuleDirectShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastCapsuleIndirectShadow: 1;
    
    UPROPERTY(Transient)
    uint8 bCPUSkinning: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bEnableUpdateRateOptimizations: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bDisplayDebugUpdateRateOptimizations: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderStatic: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bIgnoreMasterPoseComponentLOD: 1;
    
protected:
    UPROPERTY(Transient)
    uint8 bCachedLocalBoundsUpToDate: 1;
    
private:
    UPROPERTY(Transient)
    uint8 bForceMeshObjectUpdate: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CapsuleIndirectShadowMinVisibility;
    
protected:
    UPROPERTY(Transient)
    FBoxSphereBounds CachedWorldSpaceBounds;
    
    UPROPERTY(Transient)
    FMatrix CachedWorldToLocalTransform;
    
public:
    USkinnedMeshComponent();
    UFUNCTION(BlueprintCallable)
    void UnloadSkinWeightProfile(FName InProfileName);
    
    UFUNCTION(BlueprintCallable)
    void UnHideBoneByName(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable)
    void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    
    UFUNCTION(BlueprintCallable)
    void ShowMaterialSection(int32 MaterialID, int32 SectionIndex, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowAllMaterialSections(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexOffsetUsage(int32 LODIndex, int32 Usage);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexColorOverride_LinearColor(int32 LODIndex, const TArray<FLinearColor>& VertexColors);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkinWeightProfile(FName InProfileName);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinWeightOverride(int32 LODIndex, const TArray<FSkelMeshSkinWeightInfo>& SkinWeights);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderStatic(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPreSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets);
    
    UFUNCTION(BlueprintCallable)
    void SetPostSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
    
    UFUNCTION(BlueprintCallable)
    void SetMinLOD(int32 InNewMinLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedLOD(int32 InNewForcedLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetCastCapsuleIndirectShadow(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCastCapsuleDirectShadow(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleIndirectShadowMinVisibility(float newValue);
    
    UFUNCTION(BlueprintPure)
    bool IsUsingSkinWeightProfile() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMaterialSectionShown(int32 MaterialID, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsBoneHiddenByName(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void HideBoneByName(FName BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
    
    UFUNCTION(BlueprintPure)
    int32 GetVertexOffsetUsage(int32 LODIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSocketBoneName(FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetRefPosePosition(int32 BoneIndex);
    
    UFUNCTION(BlueprintPure)
    FName GetParentBone(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumLODs() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumBones() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetForcedLOD() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName) const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentSkinWeightProfileName() const;
    
    UFUNCTION(BlueprintPure)
    FName GetBoneName(int32 BoneIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBoneIndex(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    FName FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearVertexColorOverride(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearSkinWeightProfile();
    
    UFUNCTION(BlueprintCallable)
    void ClearSkinWeightOverride(int32 LODIndex);
    
    UFUNCTION(BlueprintPure)
    bool BoneIsChildOf(FName BoneName, FName ParentBoneName) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

