#pragma once
#include "CoreMinimal.h"
#include "MagicLeapResult.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bSuccess;
    
    UPROPERTY(BlueprintReadOnly)
    FString AdditionalInfo;
    
    FMagicLeapResult();
};

