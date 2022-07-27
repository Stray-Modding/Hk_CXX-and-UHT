#pragma once
#include "CoreMinimal.h"
#include "EEmitterDynamicParameterValue.h"
#include "RawDistributionFloat.h"
#include "EmitterDynamicParameter.generated.h"

USTRUCT(BlueprintType)
struct FEmitterDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseEmitterTime: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpawnTimeOnly: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEmitterDynamicParameterValue> ValueMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleVelocityByParamValue: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat ParamValue;
    
    ENGINE_API FEmitterDynamicParameter();
};

