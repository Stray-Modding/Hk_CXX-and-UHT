#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "EMaterialExposedTextureProperty.h"
#include "MaterialExpressionTextureProperty.generated.h"

UCLASS(CollapseCategories)
class ENGINE_API UMaterialExpressionTextureProperty : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput TextureObject;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialExposedTextureProperty> Property;
    
    UMaterialExpressionTextureProperty();
};

