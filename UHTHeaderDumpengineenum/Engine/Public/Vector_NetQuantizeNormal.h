#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Vector_NetQuantizeNormal.generated.h"

USTRUCT(BlueprintType)
struct FVector_NetQuantizeNormal : public FVector {
    GENERATED_BODY()
public:
    ENGINE_API FVector_NetQuantizeNormal();
};

