#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PoseSnapshot.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPoseSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> LocalTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SkeletalMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SnapshotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsValid;
    
    FPoseSnapshot();
};

