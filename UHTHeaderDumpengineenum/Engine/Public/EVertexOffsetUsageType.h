#pragma once
#include "CoreMinimal.h"
#include "EVertexOffsetUsageType.generated.h"

UENUM(BlueprintType)
enum class EVertexOffsetUsageType : uint8 {
    None,
    PreSkinningOffset,
    PostSkinningOffset,
};

