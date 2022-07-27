#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ConstraintDrive.h"
#include "LinearDriveConstraint.generated.h"

USTRUCT()
struct ENGINE_API FLinearDriveConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector PositionTarget;
    
    UPROPERTY(EditAnywhere)
    FVector VelocityTarget;
    
    UPROPERTY(EditAnywhere)
    FConstraintDrive XDrive;
    
    UPROPERTY(EditAnywhere)
    FConstraintDrive YDrive;
    
    UPROPERTY(EditAnywhere)
    FConstraintDrive ZDrive;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnablePositionDrive: 1;
    
    FLinearDriveConstraint();
};

