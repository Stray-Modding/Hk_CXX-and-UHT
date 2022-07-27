#pragma once
#include "CoreMinimal.h"
#include "ConstraintInstance.h"
#include "SceneComponent.h"
#include "ConstraintBrokenSignatureDelegate.h"
#include "ConstrainComponentPropName.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ELinearConstraintMotion -FallbackName=ELinearConstraintMotion
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EConstraintFrame -FallbackName=EConstraintFrame
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EAngularConstraintMotion -FallbackName=EAngularConstraintMotion
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EAngularDriveMode.h"
#include "PhysicsConstraintComponent.generated.h"

class UPhysicsConstraintTemplate;
class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPhysicsConstraintComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    AActor* ConstraintActor1;
    
    UPROPERTY(EditAnywhere)
    FConstrainComponentPropName ComponentName1;
    
    UPROPERTY(EditInstanceOnly)
    AActor* ConstraintActor2;
    
    UPROPERTY(EditAnywhere)
    FConstrainComponentPropName ComponentName2;
    
    UPROPERTY(Instanced)
    UPhysicsConstraintTemplate* ConstraintSetup;
    
    UPROPERTY(BlueprintAssignable)
    FConstraintBrokenSignature OnConstraintBroken;
    
    UPROPERTY(EditAnywhere)
    FConstraintInstance ConstraintInstance;
    
    UPhysicsConstraintComponent();
    UFUNCTION(BlueprintCallable)
    void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientationDriveSLERP(bool bEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearVelocityTarget(const FVector& InVelTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearPositionTarget(const FVector& InPosTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCollision(bool bDisableCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& RefPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& PriAxis, const FVector& SecAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame::Type> Frame, const FTransform& RefFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityTarget(const FVector& InVelTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularOrientationTarget(const FRotator& InPosTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDriveMode(TEnumAsByte<EAngularDriveMode::Type> DriveMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    bool IsBroken();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentTwist() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSwing2() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSwing1() const;
    
    UFUNCTION(BlueprintCallable)
    void GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce);
    
    UFUNCTION(BlueprintCallable)
    void BreakConstraint();
    
};

