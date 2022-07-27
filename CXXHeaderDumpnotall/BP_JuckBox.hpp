#ifndef UE4SS_SDK_BP_JuckBox_HPP
#define UE4SS_SDK_BP_JuckBox_HPP

class ABP_JuckBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UCOMP_ingame_player_C* COMP_ingame_player;
    class UCOMP_UsableDroneTimer_C* COMP_UsableDroneTimer;
    class UStaticMeshComponent* StaticMesh;
    int32 Channel;
    bool is on;

    void LogicTrigger();
    void BndEvt__COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_1_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void BndEvt__BP_JuckBox_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void Stop_and_reset();
    void ExecuteUbergraph_BP_JuckBox(int32 EntryPoint);
};

#endif
