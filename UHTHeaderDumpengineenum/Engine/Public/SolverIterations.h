#pragma once
#include "CoreMinimal.h"
#include "SolverIterations.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSolverIterations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FixedTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SolverIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 JointIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SolverPushOutIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 JointPushOutIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionPushOutIterations;
    
    FSolverIterations();
};

