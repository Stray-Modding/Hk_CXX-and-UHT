#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CatInterpolateAlongSplineParams.generated.h"

USTRUCT(BlueprintType)
struct FCatInterpolateAlongSplineParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResyncTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoOverrideRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OverridenRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EarliestExit;
    
    HK_PROJECT_API FCatInterpolateAlongSplineParams();
};

