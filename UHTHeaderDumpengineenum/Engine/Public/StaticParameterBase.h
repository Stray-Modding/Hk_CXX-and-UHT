#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "StaticParameterBase.generated.h"

USTRUCT()
struct FStaticParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY()
    bool bOverride;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    ENGINE_API FStaticParameterBase();
};

