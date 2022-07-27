#ifndef UE4SS_SDK_ChaosCloth_HPP
#define UE4SS_SDK_ChaosCloth_HPP

#include "ChaosCloth_enums.hpp"

struct FChaosClothWeightedValue
{
    float Low;
    float High;

};

class UChaosClothConfig : public UClothConfigCommon
{
    EClothMassMode MassMode;
    float UniformMass;
    float TotalMass;
    float Density;
    float MinPerParticleMass;
    float EdgeStiffness;
    float BendingStiffness;
    bool bUseBendingElements;
    float AreaStiffness;
    float VolumeStiffness;
    FChaosClothWeightedValue TetherStiffness;
    float LimitScale;
    bool bUseGeodesicDistance;
    float ShapeTargetStiffness;
    float CollisionThickness;
    float FrictionCoefficient;
    bool bUseCCD;
    bool bUseSelfCollisions;
    float SelfCollisionThickness;
    bool bUseLegacyBackstop;
    float DampingCoefficient;
    bool bUsePointBasedWindModel;
    float DragCoefficient;
    float LiftCoefficient;
    bool bUseGravityOverride;
    float GravityScale;
    FVector Gravity;
    FChaosClothWeightedValue AnimDriveStiffness;
    FChaosClothWeightedValue AnimDriveDamping;
    FVector LinearVelocityScale;
    float AngularVelocityScale;
    float FictitiousAngularScale;
    bool bUseTetrahedralConstraints;
    bool bUseThinShellVolumeConstraints;
    bool bUseContinuousCollisionDetection;

};

class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
    int32 IterationCount;
    int32 SubdivisionCount;
    bool bUseLocalSpaceSimulation;
    bool bUseXPBDConstraints;

};

class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
};

class UChaosClothingInteractor : public UClothingInteractor
{

    void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
    void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
    void SetLongRangeAttachmentLinear(float TetherStiffness);
    void SetLongRangeAttachment(FVector2D TetherStiffness);
    void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);
    void SetDamping(float DampingCoefficient);
    void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
    void SetAnimDriveLinear(float AnimDriveStiffness);
    void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);
    void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);
    void ResetAndTeleport(bool bReset, bool bTeleport);
};

class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
};

#endif
