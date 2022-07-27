#pragma once
#include "CoreMinimal.h"
#include "Brush.h"
#include "Volume.generated.h"

UCLASS(Abstract)
class ENGINE_API AVolume : public ABrush {
    GENERATED_BODY()
public:
    AVolume();
};

