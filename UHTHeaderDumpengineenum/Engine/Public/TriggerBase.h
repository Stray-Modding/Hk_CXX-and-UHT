#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "TriggerBase.generated.h"

class UShapeComponent;

UCLASS(Abstract, MinimalAPI)
class ATriggerBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
public:
    ATriggerBase();
};

