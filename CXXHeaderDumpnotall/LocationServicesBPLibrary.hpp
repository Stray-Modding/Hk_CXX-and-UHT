#ifndef UE4SS_SDK_LocationServicesBPLibrary_HPP
#define UE4SS_SDK_LocationServicesBPLibrary_HPP

#include "LocationServicesBPLibrary_enums.hpp"

struct FLocationServicesData
{
    float Timestamp;
    float Longitude;
    float Latitude;
    float HorizontalAccuracy;
    float VerticalAccuracy;
    float Altitude;

};

class ULocationServices : public UBlueprintFunctionLibrary
{

    bool StopLocationServices();
    bool StartLocationServices();
    bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
    bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
    class ULocationServicesImpl* GetLocationServicesImpl();
    FLocationServicesData GetLastKnownLocation();
    bool AreLocationServicesEnabled();
};

class ULocationServicesImpl : public UObject
{
    FLocationServicesImplOnLocationChanged OnLocationChanged;
    void LocationServicesData_OnLocationChanged(FLocationServicesData LocationData);

};

#endif
