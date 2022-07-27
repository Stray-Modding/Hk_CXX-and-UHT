#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlineSession.generated.h"

UCLASS(Config=Game)
class ENGINE_API UOnlineSession : public UObject {
    GENERATED_BODY()
public:
    UOnlineSession();
};

