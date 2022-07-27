#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HoudiniInstancedActorComponent_V1.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniInstancedActorComponent_V1 : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniInstancedActorComponent_V1();
};

