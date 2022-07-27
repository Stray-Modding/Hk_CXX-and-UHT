#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineSession -FallbackName=OnlineSession
#include "OnlineSessionClient.generated.h"

UCLASS()
class ONLINESUBSYSTEMUTILS_API UOnlineSessionClient : public UOnlineSession {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bIsFromInvite;
    
    UPROPERTY(Transient)
    bool bHandlingDisconnect;
    
public:
    UOnlineSessionClient();
};

