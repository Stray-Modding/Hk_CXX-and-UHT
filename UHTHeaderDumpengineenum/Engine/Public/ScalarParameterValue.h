#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ScalarParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FScalarParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ParameterValue;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    ENGINE_API FScalarParameterValue();
};

