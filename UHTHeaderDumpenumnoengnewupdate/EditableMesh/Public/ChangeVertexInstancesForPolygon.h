#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
#include "VertexIndexAndInstanceID.h"
#include "VertexInstancesForPolygonHole.h"
#include "ChangeVertexInstancesForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FChangeVertexInstancesForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;
    
    EDITABLEMESH_API FChangeVertexInstancesForPolygon();
};

