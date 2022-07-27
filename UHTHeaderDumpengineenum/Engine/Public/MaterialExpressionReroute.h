#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionRerouteBase.h"
#include "ExpressionInput.h"
#include "MaterialExpressionReroute.generated.h"

UCLASS(CollapseCategories)
class ENGINE_API UMaterialExpressionReroute : public UMaterialExpressionRerouteBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UMaterialExpressionReroute();
};

