#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=TriangleID -FallbackName=TriangleID
#include "RenderingPolygon.generated.h"

USTRUCT()
struct FRenderingPolygon {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY()
    TArray<FTriangleID> TriangulatedPolygonTriangleIndices;
    
    EDITABLEMESH_API FRenderingPolygon();
};

