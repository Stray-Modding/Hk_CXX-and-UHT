#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.generated.h"

class UObject;
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;

UCLASS()
class AUGMENTEDREALITY_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGeoTrackingAvailabilityDelegate, bool, bIsAvailable, const FString&, Error);
    
    UPROPERTY(BlueprintAssignable)
    FGeoTrackingAvailabilityDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FGeoTrackingAvailabilityDelegate OnFailed;
    
    UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude);
    
    UFUNCTION(BlueprintCallable)
    static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject);
    
};

