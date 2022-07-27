#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PacketHandlerProfileConfig.generated.h"

UCLASS(PerObjectConfig)
class UPacketHandlerProfileConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TArray<FString> Components;
    
    UPacketHandlerProfileConfig();
};

