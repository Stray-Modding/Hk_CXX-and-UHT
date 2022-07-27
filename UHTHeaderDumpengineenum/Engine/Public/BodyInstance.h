#pragma once
#include "CoreMinimal.h"
#include "ECollisionEnabled.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=BodyInstanceCore -FallbackName=BodyInstanceCore
#include "ECollisionChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ESleepFamily -FallbackName=ESleepFamily
#include "EDOFMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CollisionResponse.h"
#include "WalkableSlopeOverride.h"
#include "BodyInstance.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct ENGINE_API FBodyInstance : public FBodyInstanceCore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> ObjectType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    ESleepFamily SleepFamily;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDOFMode::Type> DOFMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseCCD: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bIgnoreAnalyticCollisions: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bNotifyRigidBodyCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockTranslation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockXTranslation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockYTranslation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockZTranslation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockXRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockYRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockZRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideMaxAngularVelocity: 1;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideMaxDepenetrationVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideWalkableSlopeOnInstance: 1;
    
    UPROPERTY()
    uint8 bInterpolateWhenSubStepping: 1;
    
private:
    UPROPERTY(EditAnywhere)
    FName CollisionProfileName;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 PositionSolverIterationCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 VelocitySolverIterationCount;
    
private:
    UPROPERTY(EditAnywhere)
    FCollisionResponse CollisionResponses;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxDepenetrationVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MassInKgOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularDamping;
    
    UPROPERTY(EditAnywhere)
    FVector CustomDOFPlaneNormal;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector COMNudge;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float MassScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector InertiaTensorScale;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FWalkableSlopeOverride WalkableSlopeOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* PhysMaterialOverride;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxAngularVelocity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float CustomSleepThresholdMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float StabilizationThresholdMultiplier;
    
    UPROPERTY()
    float PhysicsBlendWeight;
    
    FBodyInstance();
};

