#pragma once
#include "CoreMinimal.h"
#include "PurchaseType.h"
#include "PurchaseConfirmation.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FPurchaseConfirmation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PurchaseType Type;
    
    FPurchaseConfirmation();
};

