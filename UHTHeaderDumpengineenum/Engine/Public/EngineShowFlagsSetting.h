#pragma once
#include "CoreMinimal.h"
#include "EngineShowFlagsSetting.generated.h"

USTRUCT(BlueprintType)
struct FEngineShowFlagsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ShowFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;
    
    ENGINE_API FEngineShowFlagsSetting();
};

