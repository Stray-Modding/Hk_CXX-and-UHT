#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTextureCoordinate.generated.h"

UCLASS(BlueprintType, CollapseCategories, MinimalAPI)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CoordinateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UTiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VTiling;
    
    UPROPERTY(EditAnywhere)
    uint8 UnMirrorU: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 UnMirrorV: 1;
    
    UMaterialExpressionTextureCoordinate();
};

