#pragma once
#include "CoreMinimal.h"
#include "LocalMessage.h"
#include "EngineMessage.generated.h"

UCLASS(Abstract, MinimalAPI)
class UEngineMessage : public ULocalMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString FailedPlaceMessage;
    
    UPROPERTY()
    FString MaxedOutMessage;
    
    UPROPERTY()
    FString EnteredMessage;
    
    UPROPERTY()
    FString LeftMessage;
    
    UPROPERTY()
    FString GlobalNameChange;
    
    UPROPERTY()
    FString SpecEnteredMessage;
    
    UPROPERTY()
    FString NewPlayerMessage;
    
    UPROPERTY()
    FString NewSpecMessage;
    
    UEngineMessage();
};

