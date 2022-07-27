#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshClothBuildParams.generated.h"

class UClothingAssetBase;
class UPhysicsAsset;

USTRUCT()
struct ENGINE_API FSkeletalMeshClothBuildParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UClothingAssetBase> TargetAsset;
    
    UPROPERTY(EditAnywhere)
    int32 TargetLod;
    
    UPROPERTY(EditAnywhere)
    bool bRemapParameters;
    
    UPROPERTY(EditAnywhere)
    FString AssetName;
    
    UPROPERTY(EditAnywhere)
    int32 LODIndex;
    
    UPROPERTY(EditAnywhere)
    int32 SourceSection;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveFromMesh;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;
    
    FSkeletalMeshClothBuildParams();
};

