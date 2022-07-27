#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexInstanceID -FallbackName=VertexInstanceID
#include "VertexIndexAndInstanceID.generated.h"

USTRUCT(BlueprintType)
struct FVertexIndexAndInstanceID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ContourIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FVertexInstanceID VertexInstanceID;
    
    EDITABLEMESH_API FVertexIndexAndInstanceID();
};

