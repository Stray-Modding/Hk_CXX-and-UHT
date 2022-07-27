#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MeshTriCoordinate.generated.h"

USTRUCT()
struct FMeshTriCoordinate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Tri;
    
    UPROPERTY(EditAnywhere)
    FVector BaryCoord;
    
    NIAGARA_API FMeshTriCoordinate();
};

