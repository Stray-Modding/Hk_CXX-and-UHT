#pragma once
#include "CoreMinimal.h"
#include "PawnMovementComponent.h"
#include "FloatingPawnMovement.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UFloatingPawnMovement : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Deceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningBoost;
    
protected:
    UPROPERTY(Transient)
    uint8 bPositionCorrected: 1;
    
public:
    UFloatingPawnMovement();
};

