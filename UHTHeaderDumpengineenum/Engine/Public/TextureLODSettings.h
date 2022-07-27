#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TextureLODGroup.h"
#include "TextureLODSettings.generated.h"

UCLASS(PerObjectConfig, Config=DeviceProfiles)
class ENGINE_API UTextureLODSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FTextureLODGroup> TextureLODGroups;
    
    UTextureLODSettings();
};

