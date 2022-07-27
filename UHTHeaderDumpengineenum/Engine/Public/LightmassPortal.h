#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LightmassPortal.generated.h"

class ULightmassPortalComponent;

UCLASS(MinimalAPI)
class ALightmassPortal : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ULightmassPortalComponent* PortalComponent;
    
public:
    ALightmassPortal();
};

