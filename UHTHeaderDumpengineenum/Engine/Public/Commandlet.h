#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Commandlet.generated.h"

UCLASS(Abstract, MinimalAPI, Transient)
class UCommandlet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString HelpDescription;
    
    UPROPERTY()
    FString HelpUsage;
    
    UPROPERTY()
    FString HelpWebLink;
    
    UPROPERTY()
    TArray<FString> HelpParamNames;
    
    UPROPERTY()
    TArray<FString> HelpParamDescriptions;
    
    UPROPERTY()
    uint8 IsServer: 1;
    
    UPROPERTY()
    uint8 IsClient: 1;
    
    UPROPERTY()
    uint8 IsEditor: 1;
    
    UPROPERTY()
    uint8 LogToConsole: 1;
    
    UPROPERTY()
    uint8 ShowErrorCount: 1;
    
    UPROPERTY()
    uint8 ShowProgress: 1;
    
    UCommandlet();
};

