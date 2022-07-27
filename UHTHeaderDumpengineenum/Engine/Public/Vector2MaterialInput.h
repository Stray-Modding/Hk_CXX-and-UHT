#pragma once
#include "CoreMinimal.h"
#include "MaterialInput.h"
#include "Vector2MaterialInput.generated.h"

USTRUCT(NoExport)
struct FVector2MaterialInput : public FMaterialInput {
    GENERATED_BODY()
public:
    ENGINE_API FVector2MaterialInput();
};

