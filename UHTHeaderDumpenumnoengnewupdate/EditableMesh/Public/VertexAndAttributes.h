#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexInstanceID -FallbackName=VertexInstanceID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
#include "MeshElementAttributeList.h"
#include "VertexAndAttributes.generated.h"

USTRUCT(BlueprintType)
struct FVertexAndAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexInstanceID VertexInstanceID;
    
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList PolygonVertexAttributes;
    
    EDITABLEMESH_API FVertexAndAttributes();
};

