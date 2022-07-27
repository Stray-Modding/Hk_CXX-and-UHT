#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ELocationAccuracy.h"
#include "LocationServicesData.h"
#include "LocationServices.generated.h"

class ULocationServicesImpl;

UCLASS(Blueprintable)
class LOCATIONSERVICESBPLIBRARY_API ULocationServices : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocationServices();
    UFUNCTION(BlueprintCallable)
    static bool StopLocationServices();
    
    UFUNCTION(BlueprintCallable)
    static bool StartLocationServices();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
    
    UFUNCTION(BlueprintCallable)
    static bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
    
    UFUNCTION(BlueprintCallable)
    static ULocationServicesImpl* GetLocationServicesImpl();
    
    UFUNCTION(BlueprintCallable)
    static FLocationServicesData GetLastKnownLocation();
    
    UFUNCTION(BlueprintCallable)
    static bool AreLocationServicesEnabled();
    
};

