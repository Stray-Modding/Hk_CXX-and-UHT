#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PrecomputedLightInstanceData.generated.h"

USTRUCT()
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FGuid LightGuid;
    
    UPROPERTY()
    int32 PreviewShadowMapChannel;
    
    ENGINE_API FPrecomputedLightInstanceData();
};

