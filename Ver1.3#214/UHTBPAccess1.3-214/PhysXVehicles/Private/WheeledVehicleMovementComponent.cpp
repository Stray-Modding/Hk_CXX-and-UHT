#include "WheeledVehicleMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto) {
}

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle) {
}

void UWheeledVehicleMovementComponent::SetTargetGear(int32 GearNum, bool bImmediate) {
}

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering) {
}

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake) {
}

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask) {
}

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int32 GroupFlags) {
}

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask) {
}

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int32 GroupFlags) {
}

void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp) {
}

void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown) {
}

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake) {
}

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask) {
}

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int32 GroupFlags) {
}

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable) {
}

void UWheeledVehicleMovementComponent::ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear) {
}
bool UWheeledVehicleMovementComponent::ServerUpdateState_Validate(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear) {
    return true;
}

bool UWheeledVehicleMovementComponent::GetUseAutoGears() const {
    return false;
}

int32 UWheeledVehicleMovementComponent::GetTargetGear() const {
    return 0;
}

float UWheeledVehicleMovementComponent::GetForwardSpeed() const {
    return 0.0f;
}

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed() const {
    return 0.0f;
}

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed() const {
    return 0.0f;
}

int32 UWheeledVehicleMovementComponent::GetCurrentGear() const {
    return 0;
}

void UWheeledVehicleMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWheeledVehicleMovementComponent, ReplicatedState);
    DOREPLIFETIME(UWheeledVehicleMovementComponent, OverrideController);
}

UWheeledVehicleMovementComponent::UWheeledVehicleMovementComponent() {
    this->bDeprecatedSpringOffsetMode = false;
    this->bReverseAsBrake = true;
    this->bUseRVOAvoidance = false;
    this->bRawHandbrakeInput = false;
    this->bRawGearUpInput = false;
    this->bRawGearDownInput = false;
    this->bWasAvoidanceUpdated = false;
    this->Mass = 1500.00f;
    this->DragCoefficient = 0.30f;
    this->ChassisWidth = 180.00f;
    this->ChassisHeight = 140.00f;
    this->DragArea = 0.00f;
    this->EstimatedMaxEngineSpeed = 0.00f;
    this->MaxEngineRPM = 0.00f;
    this->DebugDragMagnitude = 0.00f;
    this->MinNormalizedTireLoad = 0.00f;
    this->MinNormalizedTireLoadFiltered = 0.23f;
    this->MaxNormalizedTireLoad = 3.00f;
    this->MaxNormalizedTireLoadFiltered = 3.00f;
    this->ThresholdLongitudinalSpeed = 5.00f;
    this->LowForwardSpeedSubStepCount = 3;
    this->HighForwardSpeedSubStepCount = 1;
    this->RVOAvoidanceRadius = 400.00f;
    this->RVOAvoidanceHeight = 200.00f;
    this->AvoidanceConsiderationRadius = 2000.00f;
    this->RVOSteeringStep = 0.50f;
    this->RVOThrottleStep = 0.25f;
    this->AvoidanceUID = 0;
    this->AvoidanceWeight = 0.00f;
    this->RawSteeringInput = 0.00f;
    this->RawThrottleInput = 0.00f;
    this->RawBrakeInput = 0.00f;
    this->SteeringInput = 0.00f;
    this->ThrottleInput = 0.00f;
    this->BrakeInput = 0.00f;
    this->HandbrakeInput = 0.00f;
    this->IdleBrakeInput = 0.00f;
    this->StopThreshold = 10.00f;
    this->WrongDirectionThreshold = 100.00f;
    this->OverrideController = NULL;
}

