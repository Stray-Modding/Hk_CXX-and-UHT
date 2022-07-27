#pragma once
#include "CoreMinimal.h"
#include "PurchaseType.h"
#include "PurchaseItemDetails.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FPurchaseItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PurchaseType Type;
    
    FPurchaseItemDetails();
};

