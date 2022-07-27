#ifndef UE4SS_SDK_CACA_LoupeLamp_HPP
#define UE4SS_SDK_CACA_LoupeLamp_HPP

class ACACA_LoupeLamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool On;                                                                          // 0x0248 (size: 0x1)

    void LogicTrigger();
    void ExecuteUbergraph_CACA_LoupeLamp(int32 EntryPoint);
}; // Size: 0x249

#endif
