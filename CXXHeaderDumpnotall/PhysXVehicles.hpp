#ifndef UE4SS_SDK_PhysXVehicles_HPP
#define UE4SS_SDK_PhysXVehicles_HPP

#include "PhysXVehicles_enums.hpp"

struct FWheelSetup
{
    TSubclassOf<class UVehicleWheel> WheelClass;
    FName BoneName;
    FVector AdditionalOffset;
    bool bDisableSteering;

};

struct FReplicatedVehicleState
{
    float SteeringInput;
    float ThrottleInput;
    float BrakeInput;
    float HandbrakeInput;
    int32 CurrentGear;

};

struct FVehicleInputRate
{
    float RiseRate;
    float FallRate;

};

class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
    uint8 bDeprecatedSpringOffsetMode;
    uint8 bReverseAsBrake;
    uint8 bUseRVOAvoidance;
    uint8 bRawHandbrakeInput;
    uint8 bRawGearUpInput;
    uint8 bRawGearDownInput;
    uint8 bWasAvoidanceUpdated;
    float Mass;
    TArray<FWheelSetup> WheelSetups;
    float DragCoefficient;
    float ChassisWidth;
    float ChassisHeight;
    float DragArea;
    float EstimatedMaxEngineSpeed;
    float MaxEngineRPM;
    float DebugDragMagnitude;
    FVector InertiaTensorScale;
    float MinNormalizedTireLoad;
    float MinNormalizedTireLoadFiltered;
    float MaxNormalizedTireLoad;
    float MaxNormalizedTireLoadFiltered;
    float ThresholdLongitudinalSpeed;
    int32 LowForwardSpeedSubStepCount;
    int32 HighForwardSpeedSubStepCount;
    TArray<class UVehicleWheel*> Wheels;
    float RVOAvoidanceRadius;
    float RVOAvoidanceHeight;
    float AvoidanceConsiderationRadius;
    float RVOSteeringStep;
    float RVOThrottleStep;
    int32 AvoidanceUID;
    FNavAvoidanceMask AvoidanceGroup;
    FNavAvoidanceMask GroupsToAvoid;
    FNavAvoidanceMask GroupsToIgnore;
    float AvoidanceWeight;
    FVector PendingLaunchVelocity;
    FReplicatedVehicleState ReplicatedState;
    float RawSteeringInput;
    float RawThrottleInput;
    float RawBrakeInput;
    float SteeringInput;
    float ThrottleInput;
    float BrakeInput;
    float HandbrakeInput;
    float IdleBrakeInput;
    float StopThreshold;
    float WrongDirectionThreshold;
    FVehicleInputRate ThrottleInputRate;
    FVehicleInputRate BrakeInputRate;
    FVehicleInputRate HandbrakeInputRate;
    FVehicleInputRate SteeringInputRate;
    class AController* OverrideController;

    void SetUseAutoGears(bool bUseAuto);
    void SetThrottleInput(float Throttle);
    void SetTargetGear(int32 GearNum, bool bImmediate);
    void SetSteeringInput(float Steering);
    void SetHandbrakeInput(bool bNewHandbrake);
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32 GroupFlags);
    void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32 GroupFlags);
    void SetGearUp(bool bNewGearUp);
    void SetGearDown(bool bNewGearDown);
    void SetBrakeInput(float Brake);
    void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32 GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
    bool GetUseAutoGears();
    int32 GetTargetGear();
    float GetForwardSpeed();
    float GetEngineRotationSpeed();
    float GetEngineMaxRotationSpeed();
    int32 GetCurrentGear();
};

class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{

    void SetSteerAngle(float SteerAngle, int32 WheelIndex);
    void SetDriveTorque(float DriveTorque, int32 WheelIndex);
    void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
};

struct FTireConfigMaterialFriction
{
    class UPhysicalMaterial* PhysicalMaterial;
    float FrictionScale;

};

class UTireConfig : public UDataAsset
{
    float FrictionScale;
    TArray<FTireConfigMaterialFriction> TireFrictionScales;

};

class UVehicleAnimInstance : public UAnimInstance
{
    class UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent;

    class AWheeledVehicle* GetVehicle();
};

class UVehicleWheel : public UObject
{
    class UStaticMesh* CollisionMesh;
    bool bDontCreateShape;
    bool bAutoAdjustCollisionSize;
    FVector Offset;
    float ShapeRadius;
    float ShapeWidth;
    float Mass;
    float DampingRate;
    float SteerAngle;
    bool bAffectedByHandbrake;
    class UTireType* TireType;
    class UTireConfig* TireConfig;
    float LatStiffMaxLoad;
    float LatStiffValue;
    float LongStiffValue;
    float SuspensionForceOffset;
    float SuspensionMaxRaise;
    float SuspensionMaxDrop;
    float SuspensionNaturalFrequency;
    float SuspensionDampingRatio;
    TEnumAsByte<EWheelSweepType> SweepType;
    float MaxBrakeTorque;
    float MaxHandBrakeTorque;
    class UWheeledVehicleMovementComponent* VehicleSim;
    int32 WheelIndex;
    float DebugLongSlip;
    float DebugLatSlip;
    float DebugNormalizedTireLoad;
    float DebugWheelTorque;
    float DebugLongForce;
    float DebugLatForce;
    FVector Location;
    FVector OldLocation;
    FVector Velocity;

    bool IsInAir();
    float GetSuspensionOffset();
    float GetSteerAngle();
    float GetRotationAngle();
};

class AWheeledVehicle : public APawn
{
    class USkeletalMeshComponent* Mesh;
    class UWheeledVehicleMovementComponent* VehicleMovement;

};

struct FVehicleEngineData
{
    FRuntimeFloatCurve TorqueCurve;
    float MaxRPM;
    float MOI;
    float DampingRateFullThrottle;
    float DampingRateZeroThrottleClutchEngaged;
    float DampingRateZeroThrottleClutchDisengaged;

};

struct FVehicleDifferential4WData
{
    TEnumAsByte<EVehicleDifferential4W::Type> DifferentialType;
    float FrontRearSplit;
    float FrontLeftRightSplit;
    float RearLeftRightSplit;
    float CentreBias;
    float FrontBias;
    float RearBias;

};

struct FVehicleGearData
{
    float Ratio;
    float DownRatio;
    float UpRatio;

};

struct FVehicleTransmissionData
{
    bool bUseGearAutoBox;
    float GearSwitchTime;
    float GearAutoBoxLatency;
    float FinalRatio;
    TArray<FVehicleGearData> ForwardGears;
    float ReverseGearRatio;
    float NeutralGearUpRatio;
    float ClutchStrength;

};

class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
    FVehicleEngineData EngineSetup;
    FVehicleDifferential4WData DifferentialSetup;
    float AckermannAccuracy;
    FVehicleTransmissionData TransmissionSetup;
    FRuntimeFloatCurve SteeringCurve;

};

struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
};

struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
};

#endif
