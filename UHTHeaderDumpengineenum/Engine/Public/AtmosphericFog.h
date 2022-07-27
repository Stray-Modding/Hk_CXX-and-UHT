#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "AtmosphericFog.generated.h"

class UAtmosphericFogComponent;

UCLASS(MinimalAPI)
class AAtmosphericFog : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAtmosphericFogComponent* AtmosphericFogComponent;
    
public:
    AAtmosphericFog();
};

