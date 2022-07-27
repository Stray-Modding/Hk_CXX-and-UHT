#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "GetGeoLocationAsyncTaskBlueprintProxy.generated.h"

class UObject;
class UGetGeoLocationAsyncTaskBlueprintProxy;

UCLASS()
class AUGMENTEDREALITY_API UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGetGeoLocationDelegate, float, Longitude, float, Latitude, float, Altitude, const FString&, Error);
    
    UPROPERTY(BlueprintAssignable)
    FGetGeoLocationDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FGetGeoLocationDelegate OnFailed;
    
    UGetGeoLocationAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, const FVector& WorldPosition);
    
};

