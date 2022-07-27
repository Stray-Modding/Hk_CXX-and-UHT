#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;
    FString LookUpAtRateAxisName;
    FString TurnAxisName;
    FString TurnAtRateAxisName;
    FString MoveForwardAxisName;
    FString MoveRightAxisName;
    float MouseSensitivityScale_Pitch;
    float MouseSensitivityScale_Yaw;

};

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;
    FRotator RotationalDeceleration;
    FRotator MaxRotationalVelocity;
    float MinPitch;
    float MaxPitch;
    float WalkingFriction;
    float WalkingSpeed;
    float WalkingAcceleration;

};

#endif
