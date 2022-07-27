#pragma once
#include "CoreMinimal.h"
#include "MaterialInput.h"
#include "ColorMaterialInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FColorMaterialInput : public FMaterialInput {
    GENERATED_BODY()
public:
    ENGINE_API FColorMaterialInput();
};

