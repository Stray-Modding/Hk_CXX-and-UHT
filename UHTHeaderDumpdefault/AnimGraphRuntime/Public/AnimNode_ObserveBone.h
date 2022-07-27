#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneControlSpace -FallbackName=EBoneControlSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimNode_ObserveBone.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToObserve;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> DisplaySpace;
    
    UPROPERTY(EditAnywhere)
    bool bRelativeToRefPose;
    
    UPROPERTY()
    FVector Translation;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    FVector Scale;
    
    FAnimNode_ObserveBone();
};

