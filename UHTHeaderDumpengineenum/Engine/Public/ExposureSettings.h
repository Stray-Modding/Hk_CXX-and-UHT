#pragma once
#include "CoreMinimal.h"
#include "ExposureSettings.generated.h"

USTRUCT()
struct FExposureSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FixedEV100;
    
    UPROPERTY()
    bool bFixed;
    
    ENGINE_API FExposureSettings();
};

