#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionFontSample.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionFontSampleParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UMaterialExpressionFontSampleParameter();
};

