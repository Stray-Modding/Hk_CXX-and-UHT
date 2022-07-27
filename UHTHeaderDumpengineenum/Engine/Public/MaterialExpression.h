#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialExpression.generated.h"

class UMaterialFunction;
class UMaterial;

UCLASS(Abstract)
class ENGINE_API UMaterialExpression : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterial* Material;
    
    UPROPERTY()
    UMaterialFunction* Function;
    
    UPROPERTY()
    uint8 bIsParameterExpression: 1;
    
    UMaterialExpression();
};

