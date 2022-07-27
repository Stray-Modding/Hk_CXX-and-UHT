#pragma once
#include "CoreMinimal.h"
#include "PurchaseType.h"
#include "PurchaseConfirmation.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FPurchaseConfirmation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PackageName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    PurchaseType Type;
    
    FPurchaseConfirmation();
};

