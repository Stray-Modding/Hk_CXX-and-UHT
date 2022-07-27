#pragma once
#include "CoreMinimal.h"
#include "ChannelDefinition.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FChannelDefinition {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ChannelName;
    
    UPROPERTY()
    FName ClassName;
    
    UPROPERTY()
    UClass* ChannelClass;
    
    UPROPERTY()
    int32 StaticChannelIndex;
    
    UPROPERTY()
    bool bTickOnCreate;
    
    UPROPERTY()
    bool bServerOpen;
    
    UPROPERTY()
    bool bClientOpen;
    
    UPROPERTY()
    bool bInitialServer;
    
    UPROPERTY()
    bool bInitialClient;
    
    FChannelDefinition();
};

