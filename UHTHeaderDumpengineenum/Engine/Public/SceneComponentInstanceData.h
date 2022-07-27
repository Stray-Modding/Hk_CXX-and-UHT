#pragma once
#include "CoreMinimal.h"
#include "ActorComponentInstanceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SceneComponentInstanceData.generated.h"

class USceneComponent;

USTRUCT()
struct ENGINE_API FSceneComponentInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<USceneComponent*, FTransform> AttachedInstanceComponents;
    
    FSceneComponentInstanceData();
};

