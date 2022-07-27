#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNode_SkeletalControlBase.h"
#include "SimSpaceSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ESimulationSpace.h"
#include "AnimNode_RigidBody.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FVector OverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearAccScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearVelScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentAppliedLinearAccClamp;
    
    UPROPERTY(EditAnywhere)
    FSimSpaceSettings SimSpaceSettings;
    
    UPROPERTY(EditAnywhere)
    float CachedBoundsScale;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BaseBoneRef;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(EditAnywhere)
    ESimulationSpace SimulationSpace;
    
    UPROPERTY(EditAnywhere)
    bool bForceDisableCollisionBetweenConstraintBodies;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableWorldGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideWorldGravity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTransferBoneVelocities: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFreezeIncomingPoseOnStart: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClampLinearTranslationLimitToRefPose: 1;
    
    UPROPERTY(EditAnywhere)
    float WorldSpaceMinimumScale;
    
    UPROPERTY(EditAnywhere)
    float EvaluationResetTime;
    
    FAnimNode_RigidBody();
};

