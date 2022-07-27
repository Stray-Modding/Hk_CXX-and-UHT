#pragma once
#include "CoreMinimal.h"
#include "ClientReceiveData.generated.h"

class APlayerState;
class APlayerController;
class UObject;

USTRUCT()
struct ENGINE_API FClientReceiveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    APlayerController* LocalPC;
    
    UPROPERTY()
    FName MessageType;
    
    UPROPERTY()
    int32 MessageIndex;
    
    UPROPERTY()
    FString MessageString;
    
    UPROPERTY()
    APlayerState* RelatedPlayerState_1;
    
    UPROPERTY()
    APlayerState* RelatedPlayerState_2;
    
    UPROPERTY()
    UObject* OptionalObject;
    
    FClientReceiveData();
};

