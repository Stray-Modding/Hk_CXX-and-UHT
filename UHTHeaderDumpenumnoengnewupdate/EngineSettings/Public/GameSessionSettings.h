#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameSessionSettings.generated.h"

UCLASS(Config=Game)
class ENGINESETTINGS_API UGameSessionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MaxSpectators;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MaxPlayers;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    uint8 bRequiresPushToTalk: 1;
    
    UGameSessionSettings();
};

