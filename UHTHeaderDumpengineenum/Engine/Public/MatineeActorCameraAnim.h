#pragma once
#include "CoreMinimal.h"
#include "MatineeActor.h"
#include "MatineeActorCameraAnim.generated.h"

class UCameraAnim;

UCLASS(MinimalAPI, NotPlaceable)
class AMatineeActorCameraAnim : public AMatineeActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCameraAnim* CameraAnim;
    
    AMatineeActorCameraAnim();
};

