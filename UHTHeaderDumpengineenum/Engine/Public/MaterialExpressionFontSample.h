#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionFontSample.generated.h"

class UFont;

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionFontSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFont* Font;
    
    UPROPERTY(EditAnywhere)
    int32 FontTexturePage;
    
    UMaterialExpressionFontSample();
};

