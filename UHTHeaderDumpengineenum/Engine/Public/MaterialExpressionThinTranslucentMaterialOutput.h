#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionThinTranslucentMaterialOutput.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionThinTranslucentMaterialOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput TransmittanceColor;
    
    UMaterialExpressionThinTranslucentMaterialOutput();
};

