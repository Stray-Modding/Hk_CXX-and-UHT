#pragma once
#include "CoreMinimal.h"
#include "DistributionFloatConstant.h"
#include "DistributionParamMode.h"
#include "DistributionFloatParameterBase.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatParameterBase : public UDistributionFloatConstant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float MinInput;
    
    UPROPERTY(EditAnywhere)
    float MaxInput;
    
    UPROPERTY(EditAnywhere)
    float MinOutput;
    
    UPROPERTY(EditAnywhere)
    float MaxOutput;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<DistributionParamMode> ParamMode;
    
    UDistributionFloatParameterBase();
};

