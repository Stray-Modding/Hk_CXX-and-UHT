#pragma once
#include "CoreMinimal.h"
#include "EngineServiceAuthDeny.generated.h"

USTRUCT()
struct FEngineServiceAuthDeny {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString UserName;
    
    UPROPERTY(EditAnywhere)
    FString UserToDeny;
    
    ENGINEMESSAGES_API FEngineServiceAuthDeny();
};

