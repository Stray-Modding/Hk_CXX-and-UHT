#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "ESpeedTreeLODType.h"
#include "ESpeedTreeWindType.h"
#include "ESpeedTreeGeometryType.h"
#include "MaterialExpressionSpeedTree.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionSpeedTree : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput GeometryInput;
    
    UPROPERTY()
    FExpressionInput WindInput;
    
    UPROPERTY()
    FExpressionInput LODInput;
    
    UPROPERTY()
    FExpressionInput ExtraBendWS;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpeedTreeGeometryType> GeometryType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpeedTreeWindType> WindType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpeedTreeLODType> LODType;
    
    UPROPERTY(EditAnywhere)
    float BillboardThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAccurateWindVelocities;
    
    UMaterialExpressionSpeedTree();
};

