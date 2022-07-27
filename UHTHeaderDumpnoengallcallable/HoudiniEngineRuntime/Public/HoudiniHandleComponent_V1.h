#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HoudiniHandleComponent_V1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniHandleComponent_V1 : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniHandleComponent_V1();
};

