#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Vector_NetQuantize100.generated.h"

USTRUCT(BlueprintType)
struct FVector_NetQuantize100 : public FVector {
    GENERATED_BODY()
public:
    ENGINE_API FVector_NetQuantize100();
};

