#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "ChildConnection.generated.h"

UCLASS(MinimalAPI, NonTransient)
class UChildConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UNetConnection* Parent;
    
    UChildConnection();
};

