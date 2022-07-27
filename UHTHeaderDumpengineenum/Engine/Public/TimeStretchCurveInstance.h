#pragma once
#include "CoreMinimal.h"
#include "TimeStretchCurveInstance.generated.h"

USTRUCT()
struct ENGINE_API FTimeStretchCurveInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bHasValidData;
    
public:
    FTimeStretchCurveInstance();
};

