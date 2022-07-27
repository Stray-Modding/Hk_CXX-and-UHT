#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionRerouteBase.h"
#include "MaterialExpressionNamedRerouteBase.generated.h"

UCLASS(Abstract)
class ENGINE_API UMaterialExpressionNamedRerouteBase : public UMaterialExpressionRerouteBase {
    GENERATED_BODY()
public:
    UMaterialExpressionNamedRerouteBase();
};

