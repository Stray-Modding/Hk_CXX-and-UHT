#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "TextRenderActor.generated.h"

class UTextRenderComponent;

UCLASS(MinimalAPI)
class ATextRenderActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
public:
    ATextRenderActor();
};

