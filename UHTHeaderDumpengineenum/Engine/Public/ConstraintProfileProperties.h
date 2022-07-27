#pragma once
#include "CoreMinimal.h"
#include "ConeConstraint.h"
#include "LinearConstraint.h"
#include "TwistConstraint.h"
#include "LinearDriveConstraint.h"
#include "AngularDriveConstraint.h"
#include "ConstraintProfileProperties.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FConstraintProfileProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ProjectionLinearTolerance;
    
    UPROPERTY(EditAnywhere)
    float ProjectionAngularTolerance;
    
    UPROPERTY(EditAnywhere)
    float ProjectionLinearAlpha;
    
    UPROPERTY(EditAnywhere)
    float ProjectionAngularAlpha;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float LinearBreakThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float LinearPlasticityThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float AngularBreakThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float AngularPlasticityThreshold;
    
    UPROPERTY(EditAnywhere)
    FLinearConstraint LinearLimit;
    
    UPROPERTY(EditAnywhere)
    FConeConstraint ConeLimit;
    
    UPROPERTY(EditAnywhere)
    FTwistConstraint TwistLimit;
    
    UPROPERTY(EditAnywhere)
    FLinearDriveConstraint LinearDrive;
    
    UPROPERTY(EditAnywhere)
    FAngularDriveConstraint AngularDrive;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bParentDominates: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableProjection: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableSoftProjection: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAngularBreakable: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAngularPlasticity: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bLinearBreakable: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bLinearPlasticity: 1;
    
    FConstraintProfileProperties();
};

