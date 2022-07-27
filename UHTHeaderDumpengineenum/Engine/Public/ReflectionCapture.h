#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ReflectionCapture.generated.h"

class UReflectionCaptureComponent;

UCLASS(Abstract, MinimalAPI)
class AReflectionCapture : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UReflectionCaptureComponent* CaptureComponent;
    
public:
    AReflectionCapture();
};

