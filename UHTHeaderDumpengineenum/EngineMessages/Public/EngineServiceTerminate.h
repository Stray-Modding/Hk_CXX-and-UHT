#pragma once
#include "CoreMinimal.h"
#include "EngineServiceTerminate.generated.h"

USTRUCT()
struct FEngineServiceTerminate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString UserName;
    
    ENGINEMESSAGES_API FEngineServiceTerminate();
};

