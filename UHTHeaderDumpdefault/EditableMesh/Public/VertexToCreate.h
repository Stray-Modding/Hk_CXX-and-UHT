#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
#include "VertexToCreate.generated.h"

USTRUCT(BlueprintType)
struct FVertexToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList VertexAttributes;
    
    UPROPERTY()
    FVertexID OriginalVertexID;
    
    EDITABLEMESH_API FVertexToCreate();
};

