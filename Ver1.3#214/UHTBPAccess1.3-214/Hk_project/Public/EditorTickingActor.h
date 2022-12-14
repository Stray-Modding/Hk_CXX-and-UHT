#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EditorTickingActor.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API AEditorTickingActor : public AActor {
    GENERATED_BODY()
public:
    AEditorTickingActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEditorTick(float DeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnEditorTick(float _deltaTime);
    
};

