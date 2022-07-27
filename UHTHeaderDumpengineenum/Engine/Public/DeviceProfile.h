#pragma once
#include "CoreMinimal.h"
#include "TextureLODSettings.h"
#include "DeviceProfile.generated.h"

class UObject;

UCLASS()
class ENGINE_API UDeviceProfile : public UTextureLODSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, VisibleAnywhere)
    FString DeviceType;
    
    UPROPERTY(Config, EditAnywhere)
    FString BaseProfileName;
    
    UPROPERTY()
    UObject* Parent;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> CVars;
    
    UDeviceProfile();
};

