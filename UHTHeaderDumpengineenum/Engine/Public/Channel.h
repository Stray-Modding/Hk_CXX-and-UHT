#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Channel.generated.h"

class UNetConnection;

UCLASS(Abstract, Transient)
class ENGINE_API UChannel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* Connection;
    
    UChannel();
};

