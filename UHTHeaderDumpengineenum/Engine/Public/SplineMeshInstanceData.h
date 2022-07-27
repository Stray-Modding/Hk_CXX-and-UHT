#pragma once
#include "CoreMinimal.h"
#include "SceneComponentInstanceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SplineMeshInstanceData.generated.h"

USTRUCT()
struct FSplineMeshInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector StartPos;
    
    UPROPERTY()
    FVector EndPos;
    
    UPROPERTY()
    FVector StartTangent;
    
    UPROPERTY()
    FVector EndTangent;
    
    ENGINE_API FSplineMeshInstanceData();
};

