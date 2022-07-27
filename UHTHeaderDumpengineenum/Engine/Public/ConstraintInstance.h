#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ConstraintInstanceBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ConstraintProfileProperties.h"
#include "ConstraintInstance.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FConstraintInstance : public FConstraintInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName JointName;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintBone1;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintBone2;
    
    UPROPERTY(EditAnywhere)
    FVector Pos1;
    
    UPROPERTY()
    FVector PriAxis1;
    
    UPROPERTY()
    FVector SecAxis1;
    
    UPROPERTY(EditAnywhere)
    FVector Pos2;
    
    UPROPERTY()
    FVector PriAxis2;
    
    UPROPERTY()
    FVector SecAxis2;
    
    UPROPERTY(EditAnywhere)
    FRotator AngularRotationOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleLinearLimits: 1;
    
    UPROPERTY(EditAnywhere)
    FConstraintProfileProperties ProfileInstance;
    
    FConstraintInstance();
};

