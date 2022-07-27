#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapHandMeshBlock.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPHANDMESHING_API FMagicLeapHandMeshBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IndexCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VertexCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> Vertex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> Index;
    
    FMagicLeapHandMeshBlock();
};

