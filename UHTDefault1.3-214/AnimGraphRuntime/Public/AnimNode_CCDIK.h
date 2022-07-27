#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneControlSpace -FallbackName=EBoneControlSpace
#include "BoneSocketTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_CCDIK.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector EffectorLocation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
    
    UPROPERTY(EditAnywhere)
    FBoneSocketTarget EffectorTarget;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TipBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere)
    float Precision;
    
    UPROPERTY(EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(EditAnywhere)
    bool bStartFromTail;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRotationLimit;
    
private:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> RotationLimitPerJoints;
    
public:
    FAnimNode_CCDIK();
};

