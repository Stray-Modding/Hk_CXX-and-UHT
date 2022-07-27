#pragma once
#include "CoreMinimal.h"
#include "MaterialShadingModelField.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FMaterialShadingModelField {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint16 ShadingModelField;
    
public:
    FMaterialShadingModelField();
};

