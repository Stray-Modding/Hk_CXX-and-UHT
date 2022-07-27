#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "BlockingVolume.generated.h"

UCLASS(MinimalAPI)
class ABlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    ABlockingVolume();
};

