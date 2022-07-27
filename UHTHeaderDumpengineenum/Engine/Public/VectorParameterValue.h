#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "VectorParameterValue.generated.h"

USTRUCT(BlueprintType)
struct FVectorParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ParameterValue;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    ENGINE_API FVectorParameterValue();
};

