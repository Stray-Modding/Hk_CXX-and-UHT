#pragma once
#include "CoreMinimal.h"
#include "MagicLeapResult.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdditionalInfo;
    
    FMagicLeapResult();
};

