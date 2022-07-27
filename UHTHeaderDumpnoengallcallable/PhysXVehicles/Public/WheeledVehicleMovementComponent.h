#pragma once
#include "CoreMinimal.h"
#include "WheelSetup.h"
#include "ReplicatedVehicleState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAvoidanceMask -FallbackName=NavAvoidanceMask
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RVOAvoidanceInterface -FallbackName=RVOAvoidanceInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnMovementComponent -FallbackName=PawnMovementComponent
#include "VehicleInputRate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WheeledVehicleMovementComponent.generated.h"

class UVehicleWheel;
class AController;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHYSXVEHICLES_API UWheeledVehicleMovementComponent : public UPawnMovementComponent, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeprecatedSpringOffsetMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReverseAsBrake: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRVOAvoidance: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRawHandbrakeInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRawGearUpInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRawGearDownInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasAvoidanceUpdated: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWheelSetup> WheelSetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChassisWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChassisHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DragArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EstimatedMaxEngineSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxEngineRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DebugDragMagnitude;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InertiaTensorScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNormalizedTireLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNormalizedTireLoadFiltered;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNormalizedTireLoad;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNormalizedTireLoadFiltered;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdLongitudinalSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowForwardSpeedSubStepCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighForwardSpeedSubStepCount;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVehicleWheel*> Wheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RVOAvoidanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RVOAvoidanceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceConsiderationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RVOSteeringStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RVOThrottleStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidanceUID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask AvoidanceGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask GroupsToAvoid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask GroupsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PendingLaunchVelocity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedVehicleState ReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RawSteeringInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RawThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RawBrakeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SteeringInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BrakeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandbrakeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleBrakeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrongDirectionThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate ThrottleInputRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate BrakeInputRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate HandbrakeInputRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate SteeringInputRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseAutoGears() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRotationSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineMaxRotationSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGear() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

