#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceBase.h"
#include "PurchaseInfo.h"
#include "MicroTransactionBase.generated.h"

UCLASS(NonTransient)
class UMicroTransactionBase : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPurchaseInfo> AvailableProducts;
    
    UPROPERTY()
    FString LastError;
    
    UPROPERTY()
    FString LastErrorSolution;
    
    UMicroTransactionBase();
};

