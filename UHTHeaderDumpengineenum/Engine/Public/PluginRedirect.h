#pragma once
#include "CoreMinimal.h"
#include "PluginRedirect.generated.h"

USTRUCT(BlueprintType)
struct FPluginRedirect {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString OldPluginName;
    
    UPROPERTY()
    FString NewPluginName;
    
    ENGINE_API FPluginRedirect();
};

