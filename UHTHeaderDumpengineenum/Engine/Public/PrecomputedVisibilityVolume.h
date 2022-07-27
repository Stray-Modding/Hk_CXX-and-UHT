#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "PrecomputedVisibilityVolume.generated.h"

UCLASS(MinimalAPI)
class APrecomputedVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
    APrecomputedVisibilityVolume();
};

