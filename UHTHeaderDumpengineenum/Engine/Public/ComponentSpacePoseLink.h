#pragma once
#include "CoreMinimal.h"
#include "PoseLinkBase.h"
#include "ComponentSpacePoseLink.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FComponentSpacePoseLink : public FPoseLinkBase {
    GENERATED_BODY()
public:
    FComponentSpacePoseLink();
};

