#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PrecomputedSkyLightInstanceData.generated.h"

USTRUCT()
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid LightGuid;
    
    UPROPERTY()
    float AverageBrightness;
    
    ENGINE_API FPrecomputedSkyLightInstanceData();
};

