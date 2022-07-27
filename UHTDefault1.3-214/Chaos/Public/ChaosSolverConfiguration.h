#pragma once
#include "CoreMinimal.h"
#include "EClusterUnionMethod.h"
#include "SolverCollisionFilterSettings.h"
#include "SolverTrailingFilterSettings.h"
#include "SolverBreakingFilterSettings.h"
#include "ChaosSolverConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FChaosSolverConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Iterations;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionPairIterations;
    
    UPROPERTY(EditAnywhere)
    int32 PushOutIterations;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionPushOutPairIterations;
    
    UPROPERTY(EditAnywhere)
    float CollisionMarginFraction;
    
    UPROPERTY(EditAnywhere)
    float CollisionMarginMax;
    
    UPROPERTY(EditAnywhere)
    float CollisionCullDistance;
    
    UPROPERTY(EditAnywhere)
    int32 JointPairIterations;
    
    UPROPERTY(EditAnywhere)
    int32 JointPushOutPairIterations;
    
    UPROPERTY(EditAnywhere)
    float ClusterConnectionFactor;
    
    UPROPERTY(EditAnywhere)
    EClusterUnionMethod ClusterUnionConnectionType;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateCollisionData;
    
    UPROPERTY(EditAnywhere)
    FSolverCollisionFilterSettings CollisionFilterSettings;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateBreakData;
    
    UPROPERTY(EditAnywhere)
    FSolverBreakingFilterSettings BreakingFilterSettings;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateTrailingData;
    
    UPROPERTY(EditAnywhere)
    FSolverTrailingFilterSettings TrailingFilterSettings;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateContactGraph;
    
    CHAOS_API FChaosSolverConfiguration();
};

