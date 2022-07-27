#pragma once
#include "CoreMinimal.h"
#include "PurchaseType.h"
#include "PurchaseItemDetails.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FPurchaseItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Price;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    PurchaseType Type;
    
    FPurchaseItemDetails();
};

