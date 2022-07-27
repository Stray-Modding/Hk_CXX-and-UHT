#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
#include "AdaptorTriangleID.h"
#include "AdaptorPolygon.generated.h"

USTRUCT()
struct FAdaptorPolygon {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY()
    TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;
    
    EDITABLEMESH_API FAdaptorPolygon();
};

