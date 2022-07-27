#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "KeyBind.generated.h"

USTRUCT(BlueprintType)
struct FKeyBind {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FKey Key;
    
    UPROPERTY(Config)
    FString Command;
    
    UPROPERTY(Config)
    uint8 Control: 1;
    
    UPROPERTY(Config)
    uint8 Shift: 1;
    
    UPROPERTY(Config)
    uint8 Alt: 1;
    
    UPROPERTY(Config)
    uint8 Cmd: 1;
    
    UPROPERTY(Config)
    uint8 bIgnoreCtrl: 1;
    
    UPROPERTY(Config)
    uint8 bIgnoreShift: 1;
    
    UPROPERTY(Config)
    uint8 bIgnoreAlt: 1;
    
    UPROPERTY(Config)
    uint8 bIgnoreCmd: 1;
    
    UPROPERTY(Transient)
    uint8 bDisabled: 1;
    
    ENGINE_API FKeyBind();
};

