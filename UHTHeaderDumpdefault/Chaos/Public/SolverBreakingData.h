#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SolverBreakingData.generated.h"

USTRUCT(BlueprintType)
struct FSolverBreakingData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector Velocity;
    
    UPROPERTY()
    FVector AngularVelocity;
    
    UPROPERTY()
    float Mass;
    
    UPROPERTY()
    int32 ParticleIndex;
    
    UPROPERTY()
    int32 ParticleIndexMesh;
    
    CHAOS_API FSolverBreakingData();
};

