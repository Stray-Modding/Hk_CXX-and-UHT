#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryInstanceCache.h"
#include "AISubsystem.h"
#include "EEnvQueryRunMode.h"
#include "EnvQueryManager.generated.h"

class UObject;
class UEnvQueryContext;
class UEnvQueryInstanceBlueprintWrapper;
class UEnvQuery;

UCLASS(BlueprintType, Transient, Config=Game)
class AIMODULE_API UEnvQueryManager : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FEnvQueryInstanceCache> InstanceCache;
    
    UPROPERTY(Transient)
    TArray<UEnvQueryContext*> LocalContexts;
    
    UPROPERTY()
    TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
    
    UPROPERTY(Config)
    float MaxAllowedTestingTime;
    
    UPROPERTY(Config)
    bool bTestQueriesUsingBreadth;
    
    UPROPERTY(Config)
    int32 QueryCountWarningThreshold;
    
    UPROPERTY(Config)
    double QueryCountWarningInterval;
    
public:
    UEnvQueryManager();
    UFUNCTION(BlueprintCallable)
    static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass);
    
};

