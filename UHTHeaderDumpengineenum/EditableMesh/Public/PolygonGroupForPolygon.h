#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
#include "PolygonGroupForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FPolygonGroupForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    FPolygonGroupID PolygonGroupID;
    
    EDITABLEMESH_API FPolygonGroupForPolygon();
};

