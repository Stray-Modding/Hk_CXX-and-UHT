#pragma once
#include "CoreMinimal.h"
#include "ERBFSolverType.h"
#include "ERBFNormalizeMethod.h"
#include "ERBFDistanceMethod.h"
#include "ERBFFunctionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneAxis -FallbackName=EBoneAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RBFParams.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FRBFParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERBFSolverType SolverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutomaticRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERBFFunctionType Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneAxis> TwistAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERBFNormalizeMethod NormalizeMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MedianReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MedianMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MedianMax;
    
    FRBFParams();
};

