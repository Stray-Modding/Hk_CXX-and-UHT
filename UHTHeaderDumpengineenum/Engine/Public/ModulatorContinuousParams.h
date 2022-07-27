#pragma once
#include "CoreMinimal.h"
#include "ModulationParamMode.h"
#include "ModulatorContinuousParams.generated.h"

USTRUCT(BlueprintType)
struct FModulatorContinuousParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float Default;
    
    UPROPERTY(EditAnywhere)
    float MinInput;
    
    UPROPERTY(EditAnywhere)
    float MaxInput;
    
    UPROPERTY(EditAnywhere)
    float MinOutput;
    
    UPROPERTY(EditAnywhere)
    float MaxOutput;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ModulationParamMode> ParamMode;
    
    ENGINE_API FModulatorContinuousParams();
};

