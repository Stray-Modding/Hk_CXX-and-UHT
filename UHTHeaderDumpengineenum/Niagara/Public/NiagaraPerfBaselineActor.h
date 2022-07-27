#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NiagaraPerfBaselineActor.generated.h"

class UNiagaraBaselineController;
class UTextRenderComponent;

UCLASS()
class NIAGARA_API ANiagaraPerfBaselineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraBaselineController* Controller;
    
    UPROPERTY(EditAnywhere, Export)
    UTextRenderComponent* Label;
    
    ANiagaraPerfBaselineActor();
};

