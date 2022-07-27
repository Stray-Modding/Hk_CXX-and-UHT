#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EARServiceAvailability.h"
#include "EARServiceInstallRequestResult.h"
#include "EARServicePermissionRequestResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "ARDependencyHandler.generated.h"

class UARDependencyHandler;
class UARSessionConfig;

UCLASS(Abstract, Blueprintable)
class AUGMENTEDREALITY_API UARDependencyHandler : public UObject {
    GENERATED_BODY()
public:
    UARDependencyHandler();
    UFUNCTION(BlueprintCallable)
    void StartARSessionLatent(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void RequestARSessionPermission(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult);
    
    UFUNCTION(BlueprintCallable)
    void InstallARService(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult);
    
    UFUNCTION(BlueprintCallable)
    static UARDependencyHandler* GetARDependencyHandler();
    
    UFUNCTION(BlueprintCallable)
    void CheckARServiceAvailability(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability);
    
};

