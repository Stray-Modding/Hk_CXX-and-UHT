#pragma once
#include "CoreMinimal.h"
#include "RecastGraphWrapper.generated.h"

class ARecastNavMesh;

USTRUCT()
struct AIMODULE_API FRecastGraphWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ARecastNavMesh* RecastNavMeshActor;
    
public:
    FRecastGraphWrapper();
};

