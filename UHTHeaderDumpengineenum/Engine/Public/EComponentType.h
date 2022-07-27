#pragma once
#include "CoreMinimal.h"
#include "EComponentType.generated.h"

UENUM(BlueprintType)
namespace EComponentType {
    enum Type {
        None,
        TranslationX,
        TranslationY,
        TranslationZ,
        RotationX,
        RotationY,
        RotationZ,
        Scale,
        ScaleX,
        ScaleY,
        ScaleZ,
    };
}

