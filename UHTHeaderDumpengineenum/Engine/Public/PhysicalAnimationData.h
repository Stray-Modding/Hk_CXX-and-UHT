#pragma once
#include "CoreMinimal.h"
#include "PhysicalAnimationData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPhysicalAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsLocalSimulation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrientationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularVelocityStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PositionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VelocityStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLinearForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularForce;
    
    FPhysicalAnimationData();
};

