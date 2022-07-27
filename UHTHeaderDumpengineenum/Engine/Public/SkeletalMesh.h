#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "StreamableRenderAsset.h"
#include "Interface_CollisionDataProvider.h"
#include "Interface_AssetUserData.h"
#include "NodeMappingProviderInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "SkeletalMaterial.h"
#include "BoneMirrorInfo.h"
#include "SkeletalMeshLODInfo.h"
#include "PerPlatformInt.h"
#include "PerPlatformBool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "SkeletalMeshSamplingInfo.h"
#include "SkinWeightProfileInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SkeletalMesh.generated.h"

class UClothingAssetBase;
class UNodeMappingContainer;
class USkeleton;
class UMorphTarget;
class UBodySetup;
class UPhysicsAsset;
class UAnimInstance;
class UAssetUserData;
class USkeletalMeshSocket;
class USkeletalMeshLODSettings;
class UObject;
class UBlueprint;

UCLASS()
class ENGINE_API USkeletalMesh : public UStreamableRenderAsset, public IInterface_CollisionDataProvider, public IInterface_AssetUserData, public INodeMappingProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    USkeleton* Skeleton;
    
private:
    UPROPERTY(DuplicateTransient, Transient)
    FBoxSphereBounds ImportedBounds;
    
    UPROPERTY(DuplicateTransient, Transient)
    FBoxSphereBounds ExtendedBounds;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PositiveBoundsExtension;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector NegativeBoundsExtension;
    
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient)
    TArray<FSkeletalMaterial> Materials;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FBoneMirrorInfo> SkelMirrorTable;
    
private:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSkeletalMeshLODInfo> LODInfo;
    
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformInt MinLOD;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> SkelMirrorAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> SkelMirrorFlipAxis;
    
    UPROPERTY()
    uint8 bUseFullPrecisionUVs: 1;
    
    UPROPERTY()
    uint8 bUseHighPrecisionTangentBasis: 1;
    
    UPROPERTY()
    uint8 bHasBeenSimplified: 1;
    
    UPROPERTY()
    uint8 bHasVertexColors: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnablePerPolyCollision: 1;
    
    UPROPERTY(Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    UPhysicsAsset* ShadowPhysicsAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<UNodeMappingContainer*> NodeMappingData;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportRayTracing: 1;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMorphTarget*> MorphTargets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimInstance> PostProcessAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<UClothingAssetBase*> MeshClothingAssets;
    
protected:
    UPROPERTY(EditAnywhere)
    FSkeletalMeshSamplingInfo SamplingInfo;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
private:
    UPROPERTY()
    TArray<USkeletalMeshSocket*> Sockets;
    
protected:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSkinWeightProfileInfo> SkinWeightProfiles;
    
public:
    USkeletalMesh();
    UFUNCTION(BlueprintCallable)
    void SetMorphTargets(const TArray<UMorphTarget*>& InMorphTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshClothingAssets(const TArray<UClothingAssetBase*>& InMeshClothingAssets);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterials(const TArray<FSkeletalMaterial>& InMaterials);
    
    UFUNCTION(BlueprintCallable)
    void SetLODSettings(USkeletalMeshLODSettings* InLODSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAnimatingRig(TSoftObjectPtr<UObject> InAnimatingRig);
    
    UFUNCTION(BlueprintPure)
    int32 NumSockets() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> K2_GetAllMorphTargetNames() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshSocket* GetSocketByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    USkeleton* GetSkeleton() const;
    
    UFUNCTION(BlueprintPure)
    UPhysicsAsset* GetShadowPhysicsAsset() const;
    
    UFUNCTION(BlueprintPure)
    UPhysicsAsset* GetPhysicsAsset() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UNodeMappingContainer*> GetNodeMappingData() const;
    
    UFUNCTION(BlueprintPure)
    UNodeMappingContainer* GetNodeMappingContainer(UBlueprint* SourceAsset) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMorphTarget*> GetMorphTargets() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UClothingAssetBase*> GetMeshClothingAssets() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSkeletalMaterial> GetMaterials() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshLODSettings* GetLODSettings() const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetImportedBounds() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UObject> GetDefaultAnimatingRig() const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& OutBoneIndex, int32& OutIndex) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32& OutIndex) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshSocket* FindSocket(FName InSocketName) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

