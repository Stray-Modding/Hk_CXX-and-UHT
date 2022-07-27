#pragma once
#include "CoreMinimal.h"
#include "ProviderPollResult.generated.h"

USTRUCT(BlueprintType)
struct FProviderPollResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString MachineName;
    
    UPROPERTY()
    double MachineTimeOffset;
    
    LIVELINK_API FProviderPollResult();
};

