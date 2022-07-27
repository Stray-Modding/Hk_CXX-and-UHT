#pragma once
#include "CoreMinimal.h"
#include "PaintedVertex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "StaticMeshVertexColorLODData.generated.h"

USTRUCT(BlueprintType)
struct FStaticMeshVertexColorLODData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPaintedVertex> PaintedVertices;
    
    UPROPERTY()
    TArray<FColor> VertexBufferColors;
    
    UPROPERTY()
    uint32 LODIndex;
    
    ENGINE_API FStaticMeshVertexColorLODData();
};

