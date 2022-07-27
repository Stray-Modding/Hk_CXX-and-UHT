#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RegisteredDeviceInfo.h"
#include "RawInputFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class RAWINPUT_API URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URawInputFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
};

