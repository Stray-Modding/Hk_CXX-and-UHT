#pragma once
#include "CoreMinimal.h"
#include "URL.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FURL {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Protocol;
    
    UPROPERTY()
    FString Host;
    
    UPROPERTY()
    int32 Port;
    
    UPROPERTY()
    int32 Valid;
    
    UPROPERTY()
    FString Map;
    
    UPROPERTY()
    FString RedirectURL;
    
    UPROPERTY()
    TArray<FString> Op;
    
    UPROPERTY()
    FString Portal;
    
    FURL();
};

