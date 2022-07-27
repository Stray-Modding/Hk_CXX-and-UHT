#include "LocationServices.h"

class ULocationServicesImpl;

bool ULocationServices::StopLocationServices() {
    return false;
}

bool ULocationServices::StartLocationServices() {
    return false;
}

bool ULocationServices::IsLocationAccuracyAvailable(ELocationAccuracy Accuracy) {
    return false;
}

bool ULocationServices::InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter) {
    return false;
}

ULocationServicesImpl* ULocationServices::GetLocationServicesImpl() {
    return NULL;
}

FLocationServicesData ULocationServices::GetLastKnownLocation() {
    return FLocationServicesData{};
}

bool ULocationServices::AreLocationServicesEnabled() {
    return false;
}

ULocationServices::ULocationServices() {
}

