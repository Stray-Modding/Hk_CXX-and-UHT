#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LiveLinkPingMessage.generated.h"

USTRUCT()
struct FLiveLinkPingMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PollRequest;
    
    UPROPERTY()
    int32 LiveLinkVersion;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkPingMessage();
};

