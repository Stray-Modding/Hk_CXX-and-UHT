#pragma once
#include "CoreMinimal.h"
#include "MaterialAttributesInput.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionGetMaterialAttributes.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaterialAttributesInput MaterialAttributes;
    
    UPROPERTY(EditAnywhere)
    TArray<FGuid> AttributeGetTypes;
    
    UMaterialExpressionGetMaterialAttributes();
};

