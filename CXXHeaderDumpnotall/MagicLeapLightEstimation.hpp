#ifndef UE4SS_SDK_MagicLeapLightEstimation_HPP
#define UE4SS_SDK_MagicLeapLightEstimation_HPP

#include "MagicLeapLightEstimation_enums.hpp"

class UMagicLeapLightingTrackingComponent : public UActorComponent
{
    bool UseGlobalAmbience;
    bool UseColorTemp;

};

struct FMagicLeapLightEstimationColorTemperatureState
{
    float ColorTemperatureKelvin;
    FLinearColor AmbientColor;
    FTimespan Timestamp;

};

struct FMagicLeapLightEstimationAmbientGlobalState
{
    TArray<float> AmbientIntensityNits;
    FTimespan Timestamp;

};

class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsTrackerValid();
    bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);
    bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);
    void DestroyTracker();
    bool CreateTracker();
};

#endif
