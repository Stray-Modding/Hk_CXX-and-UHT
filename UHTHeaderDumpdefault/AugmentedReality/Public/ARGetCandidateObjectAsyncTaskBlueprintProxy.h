#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "ARGetCandidateObjectPinDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARGetCandidateObjectAsyncTaskBlueprintProxy.generated.h"

class UARGetCandidateObjectAsyncTaskBlueprintProxy;
class UObject;

UCLASS()
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FARGetCandidateObjectPin OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FARGetCandidateObjectPin OnFailed;
    
    UARGetCandidateObjectAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent);
    
};

