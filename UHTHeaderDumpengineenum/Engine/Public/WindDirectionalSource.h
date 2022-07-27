#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "WindDirectionalSource.generated.h"

class UWindDirectionalSourceComponent;

UCLASS()
class ENGINE_API AWindDirectionalSource : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWindDirectionalSourceComponent* Component;
    
public:
    AWindDirectionalSource();
};

