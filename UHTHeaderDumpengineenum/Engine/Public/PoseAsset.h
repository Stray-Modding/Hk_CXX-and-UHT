#pragma once
#include "CoreMinimal.h"
#include "AnimationAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PoseDataContainer.h"
#include "PoseAsset.generated.h"

UCLASS(MinimalAPI)
class UPoseAsset : public UAnimationAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPoseDataContainer PoseContainer;
    
    UPROPERTY()
    bool bAdditivePose;
    
    UPROPERTY()
    int32 BasePoseIndex;
    
public:
    UPROPERTY(EditAnywhere)
    FName RetargetSource;
    
    UPROPERTY()
    TArray<FTransform> RetargetSourceAssetReferencePose;
    
    UPoseAsset();
};

