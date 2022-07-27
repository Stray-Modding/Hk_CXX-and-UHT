#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "EMaterialExposedViewProperty.h"
#include "MaterialExpressionViewProperty.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionViewProperty : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialExposedViewProperty> Property;
    
    UMaterialExpressionViewProperty();
};

