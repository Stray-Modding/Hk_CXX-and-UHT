#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HoudiniMeshSplitInstancerComponent_V1.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniMeshSplitInstancerComponent_V1();
};

