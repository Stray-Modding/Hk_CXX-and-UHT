#pragma once
#include "CoreMinimal.h"
#include "EMaterialParameterAssociation.h"
#include "MaterialParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FMaterialParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMaterialParameterAssociation> Association;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    FMaterialParameterInfo();
};

