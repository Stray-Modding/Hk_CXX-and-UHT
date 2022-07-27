#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "FontParameterValue.generated.h"

class UFont;

USTRUCT(BlueprintType)
struct FFontParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFont* FontValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FontPage;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    ENGINE_API FFontParameterValue();
};

