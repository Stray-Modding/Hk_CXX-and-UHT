#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DeviceProfileManager.generated.h"

UCLASS(Transient, Config=DeviceProfiles)
class ENGINE_API UDeviceProfileManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UObject*> Profiles;
    
    UDeviceProfileManager();
};

