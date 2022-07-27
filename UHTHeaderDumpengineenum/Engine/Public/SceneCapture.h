#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "SceneCapture.generated.h"

class UStaticMeshComponent;
class USceneComponent;

UCLASS(Abstract, MinimalAPI)
class ASceneCapture : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ASceneCapture();
};

