#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseHandler.h"
#include "RBFParams.h"
#include "PoseDriverTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EPoseDriverSource.h"
#include "EPoseDriverOutput.h"
#include "AnimNode_PoseDriver.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseDriver : public FAnimNode_PoseHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    FPoseLink SourcePose;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> SourceBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> OnlyDriveBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FPoseDriverTarget> PoseTargets;
    
    UPROPERTY(EditAnywhere)
    FBoneReference EvalSpaceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRBFParams RBFParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPoseDriverSource DriveSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPoseDriverOutput DriveOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOnlyDriveSelectedBones: 1;
    
    UPROPERTY(EditAnywhere)
    int32 LODThreshold;
    
    FAnimNode_PoseDriver();
};

