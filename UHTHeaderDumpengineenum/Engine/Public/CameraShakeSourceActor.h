#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "CameraShakeSourceActor.generated.h"

class UCameraShakeSourceComponent;

UCLASS()
class ENGINE_API ACameraShakeSourceActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShakeSourceComponent* CameraShakeSourceComponent;
    
public:
    ACameraShakeSourceActor();
};

