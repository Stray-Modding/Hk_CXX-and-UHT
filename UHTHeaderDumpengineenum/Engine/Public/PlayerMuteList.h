#pragma once
#include "CoreMinimal.h"
#include "PlayerMuteList.generated.h"

USTRUCT()
struct FPlayerMuteList {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bHasVoiceHandshakeCompleted;
    
    UPROPERTY()
    int32 VoiceChannelIdx;
    
    ENGINE_API FPlayerMuteList();
};

