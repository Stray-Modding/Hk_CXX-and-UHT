#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "RuntimeVirtualTextureParameterValue.generated.h"

class URuntimeVirtualTexture;

USTRUCT(BlueprintType)
struct FRuntimeVirtualTextureParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    URuntimeVirtualTexture* ParameterValue;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    ENGINE_API FRuntimeVirtualTextureParameterValue();
};

