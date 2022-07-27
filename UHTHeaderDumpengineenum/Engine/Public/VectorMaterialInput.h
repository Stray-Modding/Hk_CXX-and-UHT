#pragma once
#include "CoreMinimal.h"
#include "MaterialInput.h"
#include "VectorMaterialInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FVectorMaterialInput : public FMaterialInput {
    GENERATED_BODY()
public:
    ENGINE_API FVectorMaterialInput();
};

