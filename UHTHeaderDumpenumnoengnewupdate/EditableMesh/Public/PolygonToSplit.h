#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
#include "VertexPair.h"
#include "PolygonToSplit.generated.h"

USTRUCT(BlueprintType)
struct FPolygonToSplit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexPair> VertexPairsToSplitAt;
    
    EDITABLEMESH_API FPolygonToSplit();
};

