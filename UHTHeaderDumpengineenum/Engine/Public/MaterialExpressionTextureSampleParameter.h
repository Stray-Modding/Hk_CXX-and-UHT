#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureSample.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionTextureSampleParameter.generated.h"

UCLASS(Abstract, CollapseCategories)
class ENGINE_API UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UMaterialExpressionTextureSampleParameter();
};

