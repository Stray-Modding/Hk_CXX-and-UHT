#pragma once
#include "CoreMinimal.h"
#include "PlayerStart.h"
#include "PlayerStartPIE.generated.h"

UCLASS(MinimalAPI, NotPlaceable)
class APlayerStartPIE : public APlayerStart {
    GENERATED_BODY()
public:
    APlayerStartPIE();
};

