#ifndef UE4SS_SDK_BP_FlickLight_HPP
#define UE4SS_SDK_BP_FlickLight_HPP

class ABP_FlickLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class UAudioComponent* alarm_light_bipper_01;                                     // 0x0238 (size: 0x8)
    class UAudioComponent* alarmSoundStart;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* AlertLamp_00;                                         // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    bool Activate;                                                                    // 0x0268 (size: 0x1)
    float Light Intensity;                                                            // 0x026C (size: 0x4)
    float Timer;                                                                      // 0x0270 (size: 0x4)
    float Frequency;                                                                  // 0x0274 (size: 0x4)
    class UMaterialInstanceDynamic* LightColor_Material;                              // 0x0278 (size: 0x8)
    float Light Intensity_current;                                                    // 0x0280 (size: 0x4)
    float LightFactorMin;                                                             // 0x0284 (size: 0x4)
    float LightFactorMax;                                                             // 0x0288 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ActivateLight();
    void DeactivateLight();
    void LogicTrigger();
    void ExecuteUbergraph_BP_FlickLight(int32 EntryPoint);
}; // Size: 0x28C

#endif
