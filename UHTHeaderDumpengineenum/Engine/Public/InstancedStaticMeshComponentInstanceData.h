#pragma once
#include "CoreMinimal.h"
#include "InstancedStaticMeshLightMapInstanceData.h"
#include "SceneComponentInstanceData.h"
#include "InstancedStaticMeshInstanceData.h"
#include "InstancedStaticMeshComponentInstanceData.generated.h"

class UStaticMesh;

USTRUCT()
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStaticMesh* StaticMesh;
    
    UPROPERTY()
    FInstancedStaticMeshLightMapInstanceData CachedStaticLighting;
    
    UPROPERTY()
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    
    UPROPERTY()
    TArray<float> PerInstanceSMCustomData;
    
    UPROPERTY()
    int32 InstancingRandomSeed;
    
    ENGINE_API FInstancedStaticMeshComponentInstanceData();
};

