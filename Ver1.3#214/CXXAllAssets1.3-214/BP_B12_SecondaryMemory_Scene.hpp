#ifndef UE4SS_SDK_BP_B12_SecondaryMemory_Scene_HPP
#define UE4SS_SDK_BP_B12_SecondaryMemory_Scene_HPP

class ABP_B12_SecondaryMemory_Scene_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0230 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0238 (size: 0x8)
    class UBillboardComponent* GUIFeedback;                                           // 0x0240 (size: 0x8)
    class UCOMP_UsableDroneMemory_C* COMP_UsableDroneMemory;                          // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    class ADialog* Memory Dialog;                                                     // 0x0258 (size: 0x8)
    FName Memory ID;                                                                  // 0x0260 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Set Memory Enabled(bool Enabled);
    void ExecuteUbergraph_BP_B12_SecondaryMemory_Scene(int32 EntryPoint);
}; // Size: 0x268

#endif
