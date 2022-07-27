#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CustomMeshTriangle.generated.h"

USTRUCT(BlueprintType)
struct FCustomMeshTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Vertex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Vertex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Vertex2;
    
    CUSTOMMESHCOMPONENT_API FCustomMeshTriangle();
};

