#ifndef UE4SS_SDK_BP_JuckBox_HPP
#define UE4SS_SDK_BP_JuckBox_HPP

class ABP_JuckBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UCOMP_ingame_player_C* COMP_ingame_player;                                  // 0x0238 (size: 0x8)
    class UCOMP_UsableDroneTimer_C* COMP_UsableDroneTimer;                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    int32 Channel;                                                                    // 0x0250 (size: 0x4)
    bool is on;                                                                       // 0x0254 (size: 0x1)

    void LogicTrigger();
    void BndEvt__COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_1_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void BndEvt__BP_JuckBox_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void Stop_and_reset();
    void ExecuteUbergraph_BP_JuckBox(int32 EntryPoint);
}; // Size: 0x255

#endif
