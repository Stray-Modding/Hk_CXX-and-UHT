#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DelegateArray.h"
#include "PlatformInterfaceBase.generated.h"

UCLASS(MinimalAPI, Transient)
class UPlatformInterfaceBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FDelegateArray> AllDelegates;
    
    UPlatformInterfaceBase();
};

