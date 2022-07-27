#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionNamedRerouteBase.h"
#include "ExpressionInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionNamedRerouteDeclaration.generated.h"

UCLASS(CollapseCategories)
class ENGINE_API UMaterialExpressionNamedRerouteDeclaration : public UMaterialExpressionNamedRerouteBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY()
    FGuid VariableGuid;
    
    UMaterialExpressionNamedRerouteDeclaration();
};

