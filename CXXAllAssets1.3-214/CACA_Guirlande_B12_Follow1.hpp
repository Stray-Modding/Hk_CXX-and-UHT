#ifndef UE4SS_SDK_CACA_Guirlande_B12_Follow1_HPP
#define UE4SS_SDK_CACA_Guirlande_B12_Follow1_HPP

class ACACA_Guirlande_B12_Follow1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float Scale;                                                                      // 0x0240 (size: 0x4)
    int32 Number of meshes;                                                           // 0x0244 (size: 0x4)
    float DelayBlink;                                                                 // 0x0248 (size: 0x4)
    bool Seed;                                                                        // 0x024C (size: 0x1)
    bool Light on/off;                                                                // 0x024D (size: 0x1)
    FRandomStream RandomStream;                                                       // 0x0250 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0258 (size: 0x8)
    TEnumAsByte<ENUM_LightsIntensity> Intensity;                                      // 0x0260 (size: 0x1)
    TEnumAsByte<ENUM_LightsColors> Color Preset;                                      // 0x0261 (size: 0x1)
    bool Override_color;                                                              // 0x0262 (size: 0x1)
    FLinearColor Color;                                                               // 0x0264 (size: 0x10)
    bool Override_Intensity;                                                          // 0x0274 (size: 0x1)
    float Intensity (lm);                                                             // 0x0278 (size: 0x4)
    TArray<class UStaticMeshComponent*> LighBulbArray;                                // 0x0280 (size: 0x10)
    TArray<class ULightComponent*> LightArray;                                        // 0x0290 (size: 0x10)
    bool WaitForLight;                                                                // 0x02A0 (size: 0x1)
    int32 IndexArrays;                                                                // 0x02A4 (size: 0x4)
    float LightDuration;                                                              // 0x02A8 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void StartBlinking();
    void ChangeSingularBulbState(int32 Index, bool On/Off);
    void ChangeStateAll(bool On/Off);
    void LogicTrigger();
    void StopBlinking();
    void ExecuteUbergraph_CACA_Guirlande_B12_Follow1(int32 EntryPoint);
}; // Size: 0x2AC

#endif
