#pragma once
#include "CoreMinimal.h"
#include "StructRedirect.generated.h"

USTRUCT(BlueprintType)
struct FStructRedirect {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName OldStructName;
    
    UPROPERTY()
    FName NewStructName;
    
    ENGINE_API FStructRedirect();
};

