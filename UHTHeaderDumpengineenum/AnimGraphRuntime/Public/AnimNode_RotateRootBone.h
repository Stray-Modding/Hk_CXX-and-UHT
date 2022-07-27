#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimNode_RotateRootBone.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RotateRootBone : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp PitchScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp YawScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MeshToComponent;
    
    FAnimNode_RotateRootBone();
};

