#pragma once
#include "CoreMinimal.h"
#include "RawInputDeviceAxisProperties.h"
#include "RawInputDeviceButtonProperties.h"
#include "RawInputDeviceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct RAWINPUT_API FRawInputDeviceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString VendorID;
    
    UPROPERTY(EditAnywhere)
    FString ProductID;
    
    UPROPERTY(EditAnywhere)
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;
    
    FRawInputDeviceConfiguration();
};

