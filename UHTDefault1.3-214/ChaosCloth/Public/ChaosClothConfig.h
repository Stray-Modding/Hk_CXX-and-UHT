#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothConfigCommon -FallbackName=ClothConfigCommon
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=EClothMassMode -FallbackName=EClothMassMode
#include "ChaosClothWeightedValue.h"
#include "ChaosClothConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothConfig : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EClothMassMode MassMode;
    
    UPROPERTY(EditAnywhere)
    float UniformMass;
    
    UPROPERTY(EditAnywhere)
    float TotalMass;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY()
    float MinPerParticleMass;
    
    UPROPERTY(EditAnywhere)
    float EdgeStiffness;
    
    UPROPERTY(EditAnywhere)
    float BendingStiffness;
    
    UPROPERTY(EditAnywhere)
    bool bUseBendingElements;
    
    UPROPERTY(EditAnywhere)
    float AreaStiffness;
    
    UPROPERTY()
    float VolumeStiffness;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue TetherStiffness;
    
    UPROPERTY(EditAnywhere)
    float LimitScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseGeodesicDistance;
    
    UPROPERTY()
    float ShapeTargetStiffness;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float FrictionCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUseCCD;
    
    UPROPERTY(EditAnywhere)
    bool bUseSelfCollisions;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionThickness;
    
    UPROPERTY(EditAnywhere)
    bool bUseLegacyBackstop;
    
    UPROPERTY(EditAnywhere)
    float DampingCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUsePointBasedWindModel;
    
    UPROPERTY(EditAnywhere)
    float DragCoefficient;
    
    UPROPERTY(EditAnywhere)
    float LiftCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUseGravityOverride;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue AnimDriveStiffness;
    
    UPROPERTY(EditAnywhere)
    FChaosClothWeightedValue AnimDriveDamping;
    
    UPROPERTY(EditAnywhere)
    FVector LinearVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float AngularVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float FictitiousAngularScale;
    
    UPROPERTY()
    bool bUseTetrahedralConstraints;
    
    UPROPERTY()
    bool bUseThinShellVolumeConstraints;
    
    UPROPERTY()
    bool bUseContinuousCollisionDetection;
    
    UChaosClothConfig();
};

