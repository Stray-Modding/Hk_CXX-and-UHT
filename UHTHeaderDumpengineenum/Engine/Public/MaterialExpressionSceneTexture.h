#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "ESceneTextureId.h"
#include "MaterialExpressionSceneTexture.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionSceneTexture : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESceneTextureId> SceneTextureId;
    
    UPROPERTY(EditAnywhere)
    bool bFiltered;
    
    UMaterialExpressionSceneTexture();
};

