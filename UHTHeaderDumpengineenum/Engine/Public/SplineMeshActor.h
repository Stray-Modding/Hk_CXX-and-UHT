#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "SplineMeshActor.generated.h"

class USplineMeshComponent;

UCLASS()
class ENGINE_API ASplineMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
public:
    ASplineMeshActor();
};

