#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "TextureParameterValue.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTextureParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ParameterValue;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    ENGINE_API FTextureParameterValue();
};

