#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceBase.h"
#include "CloudStorageBase.generated.h"

UCLASS(NonTransient)
class UCloudStorageBase : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> LocalCloudFiles;
    
    UPROPERTY()
    uint8 bSuppressDelegateCalls: 1;
    
    UCloudStorageBase();
};

