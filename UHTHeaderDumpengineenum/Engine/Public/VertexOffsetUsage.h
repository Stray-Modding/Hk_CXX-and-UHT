#pragma once
#include "CoreMinimal.h"
#include "VertexOffsetUsage.generated.h"

USTRUCT(BlueprintType)
struct FVertexOffsetUsage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Usage;
    
    ENGINE_API FVertexOffsetUsage();
};

