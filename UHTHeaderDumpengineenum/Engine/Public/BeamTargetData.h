#pragma once
#include "CoreMinimal.h"
#include "BeamTargetData.generated.h"

USTRUCT()
struct FBeamTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TargetName;
    
    UPROPERTY(EditAnywhere)
    float TargetPercentage;
    
    ENGINE_API FBeamTargetData();
};

