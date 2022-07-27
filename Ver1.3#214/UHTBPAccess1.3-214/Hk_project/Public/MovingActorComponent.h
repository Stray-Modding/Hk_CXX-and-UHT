#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "MovingActorComponent.generated.h"

class USaveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UMovingActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMovingActorComponent();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform PredictTransform(const FTransform& _transform, float _dt) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnAfterLoaded(USaveComponent* _saveComponent);
    
};

