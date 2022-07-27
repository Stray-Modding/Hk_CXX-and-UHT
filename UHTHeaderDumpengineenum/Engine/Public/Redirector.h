#pragma once
#include "CoreMinimal.h"
#include "Redirector.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRedirector {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName OldName;
    
    UPROPERTY()
    FName NewName;
    
    FRedirector();
};

