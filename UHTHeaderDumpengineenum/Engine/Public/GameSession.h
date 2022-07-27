#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "GameSession.generated.h"

UCLASS(NotPlaceable, Config=Game)
class ENGINE_API AGameSession : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(GlobalConfig)
    int32 MaxSpectators;
    
    UPROPERTY(GlobalConfig)
    int32 MaxPlayers;
    
    UPROPERTY()
    int32 MaxPartySize;
    
    UPROPERTY(GlobalConfig)
    uint8 MaxSplitscreensPerConnection;
    
    UPROPERTY(GlobalConfig)
    bool bRequiresPushToTalk;
    
    UPROPERTY()
    FName SessionName;
    
    AGameSession();
};

