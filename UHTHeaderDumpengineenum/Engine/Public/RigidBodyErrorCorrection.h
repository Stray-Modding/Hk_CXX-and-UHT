#pragma once
#include "CoreMinimal.h"
#include "RigidBodyErrorCorrection.generated.h"

USTRUCT(BlueprintType)
struct FRigidBodyErrorCorrection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PingExtrapolation;
    
    UPROPERTY(EditAnywhere)
    float PingLimit;
    
    UPROPERTY(EditAnywhere)
    float ErrorPerLinearDifference;
    
    UPROPERTY(EditAnywhere)
    float ErrorPerAngularDifference;
    
    UPROPERTY(EditAnywhere)
    float MaxRestoredStateError;
    
    UPROPERTY(EditAnywhere)
    float MaxLinearHardSnapDistance;
    
    UPROPERTY(EditAnywhere)
    float PositionLerp;
    
    UPROPERTY(EditAnywhere)
    float AngleLerp;
    
    UPROPERTY(EditAnywhere)
    float LinearVelocityCoefficient;
    
    UPROPERTY(EditAnywhere)
    float AngularVelocityCoefficient;
    
    UPROPERTY(EditAnywhere)
    float ErrorAccumulationSeconds;
    
    UPROPERTY(EditAnywhere)
    float ErrorAccumulationDistanceSq;
    
    UPROPERTY(EditAnywhere)
    float ErrorAccumulationSimilarity;
    
    ENGINE_API FRigidBodyErrorCorrection();
};

