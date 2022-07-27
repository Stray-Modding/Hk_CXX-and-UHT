#pragma once
#include "CoreMinimal.h"
#include "MulticastRecordOptions.generated.h"

USTRUCT(BlueprintType)
struct FMulticastRecordOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString FuncPathName;
    
    UPROPERTY()
    bool bServerSkip;
    
    UPROPERTY()
    bool bClientSkip;
    
    ENGINE_API FMulticastRecordOptions();
};

