#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexInstanceID -FallbackName=VertexInstanceID
#include "VertexInstanceToCreate.generated.h"

USTRUCT(BlueprintType)
struct FVertexInstanceToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList VertexInstanceAttributes;
    
    UPROPERTY()
    FVertexInstanceID OriginalVertexInstanceID;
    
    EDITABLEMESH_API FVertexInstanceToCreate();
};

