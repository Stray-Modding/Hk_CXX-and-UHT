#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Player.generated.h"

class APlayerController;

UCLASS(MinimalAPI, Transient)
class UPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    APlayerController* PlayerController;
    
    UPROPERTY()
    int32 CurrentNetSpeed;
    
    UPROPERTY(GlobalConfig)
    int32 ConfiguredInternetSpeed;
    
    UPROPERTY(GlobalConfig)
    int32 ConfiguredLanSpeed;
    
    UPlayer();
};

