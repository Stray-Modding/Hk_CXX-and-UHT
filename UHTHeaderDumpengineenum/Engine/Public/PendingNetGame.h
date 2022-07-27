#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PendingNetGame.generated.h"

class UNetDriver;
class UDemoNetDriver;

UCLASS(Transient)
class UPendingNetGame : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetDriver* NetDriver;
    
    UPROPERTY()
    UDemoNetDriver* DemoNetDriver;
    
    UPendingNetGame();
};

