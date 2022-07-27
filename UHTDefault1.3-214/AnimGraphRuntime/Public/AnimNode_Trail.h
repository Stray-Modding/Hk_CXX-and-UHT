#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimPhysPlanarLimit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "RotationLimit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNode_Trail.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_Trail : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TrailBone;
    
    UPROPERTY(EditAnywhere)
    int32 ChainLength;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> ChainBoneAxis;
    
    UPROPERTY(EditAnywhere)
    uint8 bInvertChainBoneAxis: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitStretch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUsePlanarLimit: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bActorSpaceFakeVel: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReorientParentToChild: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelaxationSpeedScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve TrailRelaxationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FRotationLimit> RotationLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVector> RotationOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimPhysPlanarLimit> PlanarLimits;
    
    UPROPERTY(EditAnywhere)
    float StretchLimit;
    
    UPROPERTY(EditAnywhere)
    FVector FakeVelocity;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BaseJoint;
    
    UPROPERTY(EditAnywhere)
    float LastBoneRotationAnimAlphaBlend;
    
    FAnimNode_Trail();
};

