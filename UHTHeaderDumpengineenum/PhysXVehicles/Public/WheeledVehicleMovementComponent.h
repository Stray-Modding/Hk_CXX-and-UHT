#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RVOAvoidanceInterface -FallbackName=RVOAvoidanceInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnMovementComponent -FallbackName=PawnMovementComponent
#include "WheelSetup.h"
#include "ReplicatedVehicleState.h"
#include "VehicleInputRate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAvoidanceMask -FallbackName=NavAvoidanceMask
#include "WheeledVehicleMovementComponent.generated.h"

class UVehicleWheel;
class AController;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHYSXVEHICLES_API UWheeledVehicleMovementComponent : public UPawnMovementComponent, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bDeprecatedSpringOffsetMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReverseAsBrake: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseRVOAvoidance: 1;
    
protected:
    UPROPERTY(Transient)
    uint8 bRawHandbrakeInput: 1;
    
    UPROPERTY(Transient)
    uint8 bRawGearUpInput: 1;
    
    UPROPERTY(Transient)
    uint8 bRawGearDownInput: 1;
    
    UPROPERTY(Transient)
    uint8 bWasAvoidanceUpdated: 1;
    
public:
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UPROPERTY(EditAnywhere)
    TArray<FWheelSetup> WheelSetups;
    
    UPROPERTY(EditAnywhere)
    float DragCoefficient;
    
    UPROPERTY(EditAnywhere)
    float ChassisWidth;
    
    UPROPERTY(EditAnywhere)
    float ChassisHeight;
    
    UPROPERTY(Transient)
    float DragArea;
    
    UPROPERTY(Transient)
    float EstimatedMaxEngineSpeed;
    
    UPROPERTY(Transient)
    float MaxEngineRPM;
    
    UPROPERTY(Transient)
    float DebugDragMagnitude;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector InertiaTensorScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinNormalizedTireLoad;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinNormalizedTireLoadFiltered;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxNormalizedTireLoad;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxNormalizedTireLoadFiltered;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ThresholdLongitudinalSpeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 LowForwardSpeedSubStepCount;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 HighForwardSpeedSubStepCount;
    
    UPROPERTY(BlueprintReadOnly, DuplicateTransient, Transient)
    TArray<UVehicleWheel*> Wheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RVOAvoidanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RVOAvoidanceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidanceConsiderationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RVOSteeringStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RVOThrottleStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 AvoidanceUID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask AvoidanceGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask GroupsToAvoid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FNavAvoidanceMask GroupsToIgnore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AvoidanceWeight;
    
    UPROPERTY()
    FVector PendingLaunchVelocity;
    
protected:
    UPROPERTY(Replicated, Transient)
    FReplicatedVehicleState ReplicatedState;
    
    UPROPERTY(Transient)
    float RawSteeringInput;
    
    UPROPERTY(Transient)
    float RawThrottleInput;
    
    UPROPERTY(Transient)
    float RawBrakeInput;
    
    UPROPERTY(Transient)
    float SteeringInput;
    
    UPROPERTY(Transient)
    float ThrottleInput;
    
    UPROPERTY(Transient)
    float BrakeInput;
    
    UPROPERTY(Transient)
    float HandbrakeInput;
    
    UPROPERTY(EditAnywhere)
    float IdleBrakeInput;
    
    UPROPERTY(EditAnywhere)
    float StopThreshold;
    
    UPROPERTY(EditAnywhere)
    float WrongDirectionThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVehicleInputRate ThrottleInputRate;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVehicleInputRate BrakeInputRate;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVehicleInputRate HandbrakeInputRate;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVehicleInputRate SteeringInputRate;
    
private:
    UPROPERTY(Replicated, Transient)
    AController* OverrideController;
    
public:
    UWheeledVehicleMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetUseAutoGears(bool bUseAuto);
    
    UFUNCTION(BlueprintCallable)
    void SetThrottleInput(float Throttle);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetGear(int32 GearNum, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringInput(float Steering);
    
    UFUNCTION(BlueprintCallable)
    void SetHandbrakeInput(bool bNewHandbrake);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnore(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToAvoid(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetGearUp(bool bNewGearUp);
    
    UFUNCTION(BlueprintCallable)
    void SetGearDown(bool bNewGearDown);
    
    UFUNCTION(BlueprintCallable)
    void SetBrakeInput(float Brake);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroup(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceEnabled(bool bEnable);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetUseAutoGears() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTargetGear() const;
    
    UFUNCTION(BlueprintPure)
    float GetForwardSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetEngineRotationSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetEngineMaxRotationSpeed() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentGear() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

