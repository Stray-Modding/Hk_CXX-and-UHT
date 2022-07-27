#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "AISystemBase.generated.h"

UCLASS(Abstract, DefaultConfig)
class ENGINE_API UAISystemBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(GlobalConfig, NoClear)
    FSoftClassPath AISystemClassName;
    
    UPROPERTY(GlobalConfig, NoClear)
    FName AISystemModuleName;
    
    UPROPERTY(GlobalConfig, NoClear)
    bool bInstantiateAISystemOnClient;
    
public:
    UAISystemBase();
};

