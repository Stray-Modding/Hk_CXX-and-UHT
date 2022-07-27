#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "CameraBlockingVolume.generated.h"

UCLASS()
class ENGINE_API ACameraBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    ACameraBlockingVolume();
};

