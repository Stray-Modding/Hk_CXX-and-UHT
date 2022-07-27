#pragma once
#include "CoreMinimal.h"
#include "EARGeoTrackingAccuracy.h"
#include "EARGeoTrackingStateReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EARGeoTrackingState.h"
#include "ARGeoTrackingSupport.generated.h"

class UARGeoTrackingSupport;

UCLASS(Abstract, BlueprintType)
class AUGMENTEDREALITY_API UARGeoTrackingSupport : public UObject {
    GENERATED_BODY()
public:
    UARGeoTrackingSupport();
    UFUNCTION(BlueprintCallable)
    static UARGeoTrackingSupport* GetGeoTrackingSupport();
    
    UFUNCTION(BlueprintPure)
    EARGeoTrackingStateReason GetGeoTrackingStateReason() const;
    
    UFUNCTION(BlueprintPure)
    EARGeoTrackingState GetGeoTrackingState() const;
    
    UFUNCTION(BlueprintPure)
    EARGeoTrackingAccuracy GetGeoTrackingAccuracy() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const FString& OptionalAnchorName);
    
    UFUNCTION(BlueprintCallable)
    bool AddGeoAnchorAtLocation(float Longitude, float Latitude, const FString& OptionalAnchorName);
    
};

