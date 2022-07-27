#pragma once
#include "CoreMinimal.h"
#include "ENodeTitleType.generated.h"

UENUM(BlueprintType)
namespace ENodeTitleType {
    enum Type {
        FullTitle,
        ListView,
        EditableTitle,
        MenuTitle,
        MAX_TitleTypes,
    };
}

