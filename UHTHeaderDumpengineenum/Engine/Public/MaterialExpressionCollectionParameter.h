#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionCollectionParameter.generated.h"

class UMaterialParameterCollection;

UCLASS(MinimalAPI)
class UMaterialExpressionCollectionParameter : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* Collection;
    
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY()
    FGuid ParameterId;
    
    UMaterialExpressionCollectionParameter();
};

