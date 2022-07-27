#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionVectorParameter.h"
#include "EChannelMaskParameterColor.h"
#include "MaterialExpressionChannelMaskParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EChannelMaskParameterColor::Type> MaskChannel;
    
    UMaterialExpressionChannelMaskParameter();
};

