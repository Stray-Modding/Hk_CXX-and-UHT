#pragma once
#include "CoreMinimal.h"
#include "RepRootMotionMontage.h"
#include "SimulatedRootMotionReplicatedMove.generated.h"

USTRUCT(BlueprintType)
struct FSimulatedRootMotionReplicatedMove {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    FRepRootMotionMontage RootMotion;
    
    ENGINE_API FSimulatedRootMotionReplicatedMove();
};

