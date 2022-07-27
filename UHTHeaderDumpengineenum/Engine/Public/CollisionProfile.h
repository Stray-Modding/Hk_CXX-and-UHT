#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "CollisionResponseTemplate.h"
#include "CustomChannelSetup.h"
#include "CustomProfile.h"
#include "Redirector.h"
#include "CollisionProfile.generated.h"

UCLASS(DefaultConfig, MinimalAPI)
class UCollisionProfile : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(GlobalConfig)
    TArray<FCollisionResponseTemplate> Profiles;
    
    UPROPERTY(GlobalConfig)
    TArray<FCustomChannelSetup> DefaultChannelResponses;
    
    UPROPERTY(GlobalConfig)
    TArray<FCustomProfile> EditProfiles;
    
    UPROPERTY(GlobalConfig)
    TArray<FRedirector> ProfileRedirects;
    
    UPROPERTY(GlobalConfig)
    TArray<FRedirector> CollisionChannelRedirects;
    
public:
    UCollisionProfile();
};

