#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionNamedRerouteBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionNamedRerouteUsage.generated.h"

class UMaterialExpressionNamedRerouteDeclaration;

UCLASS(CollapseCategories)
class ENGINE_API UMaterialExpressionNamedRerouteUsage : public UMaterialExpressionNamedRerouteBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialExpressionNamedRerouteDeclaration* Declaration;
    
    UPROPERTY()
    FGuid DeclarationGuid;
    
    UMaterialExpressionNamedRerouteUsage();
};

