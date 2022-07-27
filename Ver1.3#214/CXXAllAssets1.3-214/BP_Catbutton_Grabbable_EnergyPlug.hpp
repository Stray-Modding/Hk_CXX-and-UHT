#ifndef UE4SS_SDK_BP_Catbutton_Grabbable_EnergyPlug_HPP
#define UE4SS_SDK_BP_Catbutton_Grabbable_EnergyPlug_HPP

class ABP_Catbutton_Grabbable_EnergyPlug_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UAudioComponent* GrabVibration;                                             // 0x0278 (size: 0x8)
    class UArrowComponent* GrabPivot;                                                 // 0x0280 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0288 (size: 0x8)
    FBP_Catbutton_Grabbable_EnergyPlug_COnPlug OnPlug;                                // 0x0290 (size: 0x10)
    void OnPlug();
    FBP_Catbutton_Grabbable_EnergyPlug_COnUnplug OnUnplug;                            // 0x02A0 (size: 0x10)
    void OnUnplug();
    FBP_Catbutton_Grabbable_EnergyPlug_COnAliment OnAliment;                          // 0x02B0 (size: 0x10)
    void OnAliment(bool NewAlimented);

    void LogicTrigger();
    void ReceiveBeginPlay();
    void TurnON();
    void TurnOFF();
    void BndEvt__BP_Catbutton_Grabbable_EnergyPlug_COMP_Grabbable_K2Node_ComponentBoundEvent_0_OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__BP_Catbutton_Grabbable_EnergyPlug_COMP_Grabbable_K2Node_ComponentBoundEvent_1_OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void ExecuteUbergraph_BP_Catbutton_Grabbable_EnergyPlug(int32 EntryPoint);
    void OnAliment__DelegateSignature(bool NewAlimented);
    void OnUnplug__DelegateSignature();
    void OnPlug__DelegateSignature();
}; // Size: 0x2C0

#endif
