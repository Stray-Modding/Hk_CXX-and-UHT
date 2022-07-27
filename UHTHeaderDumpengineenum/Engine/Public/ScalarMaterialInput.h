#pragma once
#include "CoreMinimal.h"
#include "MaterialInput.h"
#include "ScalarMaterialInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FScalarMaterialInput : public FMaterialInput {
    GENERATED_BODY()
public:
    ENGINE_API FScalarMaterialInput();
};

