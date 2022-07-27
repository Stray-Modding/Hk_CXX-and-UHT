#pragma once
#include "CoreMinimal.h"
#include "EBrushType.generated.h"

UENUM(BlueprintType)
enum EBrushType {
    Brush_Default,
    Brush_Add,
    Brush_Subtract,
    Brush_MAX UMETA(Hidden),
};

