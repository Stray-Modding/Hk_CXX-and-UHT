#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionRuntimeVirtualTextureSample.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionRuntimeVirtualTextureSampleParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UMaterialExpressionRuntimeVirtualTextureSampleParameter();
};

