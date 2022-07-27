#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialExpressionDynamicParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionDynamicParameter : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FString> ParamNames;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DefaultValue;
    
    UPROPERTY(EditAnywhere)
    uint32 ParameterIndex;
    
    UMaterialExpressionDynamicParameter();
};

