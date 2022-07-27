#ifndef UE4SS_SDK_Tool_PostpProcessFogSky_New_HPP
#define UE4SS_SDK_Tool_PostpProcessFogSky_New_HPP

class ATool_PostpProcessFogSky_New_C : public AActor
{
    class UPostProcessComponent* PostProcess;
    class USceneComponent* Root;
    class UExponentialHeightFogComponent* ExponentialHeightFog;
    class USkyLightComponent* SkyLight;
    bool Volumetric Fog On/Off;
    bool Post Process On/Off;

    void UserConstructionScript();
};

#endif
