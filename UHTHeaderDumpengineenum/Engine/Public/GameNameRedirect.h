#pragma once
#include "CoreMinimal.h"
#include "GameNameRedirect.generated.h"

USTRUCT(BlueprintType)
struct FGameNameRedirect {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName OldGameName;
    
    UPROPERTY()
    FName NewGameName;
    
    ENGINE_API FGameNameRedirect();
};

