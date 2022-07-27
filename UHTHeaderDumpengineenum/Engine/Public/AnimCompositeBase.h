#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceBase.h"
#include "AnimCompositeBase.generated.h"

UCLASS(Abstract, MinimalAPI)
class UAnimCompositeBase : public UAnimSequenceBase {
    GENERATED_BODY()
public:
    UAnimCompositeBase();
};

