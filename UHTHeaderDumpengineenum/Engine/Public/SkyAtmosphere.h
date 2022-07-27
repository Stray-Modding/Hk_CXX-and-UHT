#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "SkyAtmosphere.generated.h"

class USkyAtmosphereComponent;

UCLASS(MinimalAPI)
class ASkyAtmosphere : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphereComponent;
    
public:
    ASkyAtmosphere();
};

