#ifndef UE4SS_SDK_BP_Guirlande_HPP
#define UE4SS_SDK_BP_Guirlande_HPP

class ABP_Guirlande_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float Scale;                                                                      // 0x0238 (size: 0x4)
    int32 Number of meshes;                                                           // 0x023C (size: 0x4)
    FRandomStream RandomStream;                                                       // 0x0240 (size: 0x8)
    bool Seed;                                                                        // 0x0248 (size: 0x1)
    bool Light on/off;                                                                // 0x0249 (size: 0x1)
    class UStaticMesh* StaticMesh;                                                    // 0x0250 (size: 0x8)
    TEnumAsByte<ENUM_LightsIntensity> Intensity;                                      // 0x0258 (size: 0x1)
    TEnumAsByte<ENUM_LightsColors> Color Preset;                                      // 0x0259 (size: 0x1)
    bool Override_color;                                                              // 0x025A (size: 0x1)
    FLinearColor Color;                                                               // 0x025C (size: 0x10)
    bool Override_Intensity;                                                          // 0x026C (size: 0x1)
    float Intensity (lm);                                                             // 0x0270 (size: 0x4)
    bool StaticLight On/Off;                                                          // 0x0274 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x275

#endif
