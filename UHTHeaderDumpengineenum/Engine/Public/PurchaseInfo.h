#pragma once
#include "CoreMinimal.h"
#include "PurchaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Identifier;
    
    UPROPERTY()
    FString DisplayName;
    
    UPROPERTY()
    FString DisplayDescription;
    
    UPROPERTY()
    FString DisplayPrice;
    
    ENGINE_API FPurchaseInfo();
};

