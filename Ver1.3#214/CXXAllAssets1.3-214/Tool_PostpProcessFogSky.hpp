#ifndef UE4SS_SDK_Tool_PostpProcessFogSky_HPP
#define UE4SS_SDK_Tool_PostpProcessFogSky_HPP

class ATool_PostpProcessFogSky_C : public AActor
{
    class UPostProcessComponent* PostProcess;                                         // 0x0228 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0230 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialHeightFog;                       // 0x0238 (size: 0x8)
    class USkyLightComponent* SkyLight;                                               // 0x0240 (size: 0x8)
    bool Volumetric Fog On/Off;                                                       // 0x0248 (size: 0x1)
    bool Post Process On/Off;                                                         // 0x0249 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x24A

#endif
