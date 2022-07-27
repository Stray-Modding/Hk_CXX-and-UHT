#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_AssetUserData.h"
#include "VirtualBone.h"
#include "Interface_PreviewMeshProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BoneNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SmartNameContainer.h"
#include "AnimSlotGroup.h"
#include "Skeleton.generated.h"

class USkeletalMeshSocket;
class UBlendProfile;
class UAssetUserData;

UCLASS(MinimalAPI)
class USkeleton : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<FBoneNode> BoneTree;
    
    UPROPERTY()
    TArray<FTransform> RefLocalPoses;
    
    UPROPERTY()
    FGuid VirtualBoneGuid;
    
    UPROPERTY()
    TArray<FVirtualBone> VirtualBones;
    
public:
    UPROPERTY()
    TArray<USkeletalMeshSocket*> Sockets;
    
protected:
    UPROPERTY()
    FSmartNameContainer SmartNames;
    
public:
    UPROPERTY(Export)
    TArray<UBlendProfile*> BlendProfiles;
    
private:
    UPROPERTY()
    TArray<FAnimSlotGroup> SlotGroups;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
public:
    USkeleton();
    
    // Fix for true pure virtual functions not being implemented
};

