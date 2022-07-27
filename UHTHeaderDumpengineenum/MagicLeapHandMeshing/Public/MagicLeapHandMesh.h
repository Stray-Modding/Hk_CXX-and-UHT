#pragma once
#include "CoreMinimal.h"
#include "MagicLeapHandMeshBlock.h"
#include "MagicLeapHandMesh.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPHANDMESHING_API FMagicLeapHandMesh {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DataCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMagicLeapHandMeshBlock> Data;
    
    FMagicLeapHandMesh();
};

