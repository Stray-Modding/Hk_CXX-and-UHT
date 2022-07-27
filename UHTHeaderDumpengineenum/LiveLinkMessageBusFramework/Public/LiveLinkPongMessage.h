#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LiveLinkPongMessage.generated.h"

USTRUCT()
struct FLiveLinkPongMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ProviderName;
    
    UPROPERTY()
    FString MachineName;
    
    UPROPERTY()
    FGuid PollRequest;
    
    UPROPERTY()
    int32 LiveLinkVersion;
    
    UPROPERTY()
    double CreationPlatformTime;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkPongMessage();
};

