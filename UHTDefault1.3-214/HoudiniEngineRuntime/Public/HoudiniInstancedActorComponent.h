#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HoudiniInstancedActorComponent.generated.h"

class UObject;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniInstancedActorComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    UObject* InstancedObject;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<AActor*> InstancedActors;
    
public:
    UHoudiniInstancedActorComponent();
};

