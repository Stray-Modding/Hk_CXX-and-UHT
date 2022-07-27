#pragma once
#include "CoreMinimal.h"
#include "ConstraintDrive.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAngularDriveMode.h"
#include "AngularDriveConstraint.generated.h"

USTRUCT()
struct ENGINE_API FAngularDriveConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FConstraintDrive TwistDrive;
    
    UPROPERTY(EditAnywhere)
    FConstraintDrive SwingDrive;
    
    UPROPERTY(EditAnywhere)
    FConstraintDrive SlerpDrive;
    
    UPROPERTY(EditAnywhere)
    FRotator OrientationTarget;
    
    UPROPERTY(EditAnywhere)
    FVector AngularVelocityTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAngularDriveMode::Type> AngularDriveMode;
    
    FAngularDriveConstraint();
};

