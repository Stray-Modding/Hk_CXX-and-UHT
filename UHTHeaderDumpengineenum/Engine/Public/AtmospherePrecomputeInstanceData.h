#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
#include "AtmospherePrecomputeInstanceData.generated.h"

USTRUCT()
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    ENGINE_API FAtmospherePrecomputeInstanceData();
};

