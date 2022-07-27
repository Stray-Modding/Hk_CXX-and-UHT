#ifndef UE4SS_SDK_CACA_CatButtonProps_Drone_Alex_HPP
#define UE4SS_SDK_CACA_CatButtonProps_Drone_Alex_HPP

class ACACA_CatButtonProps_Drone_Alex_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UAudioComponent* GrabVibration;                                             // 0x0278 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0280 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0288 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_Disk_Grabbable_COMP_Grabbable_K2Node_ComponentBoundEvent_0_OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__BP_Disk_Grabbable_COMP_Grabbable_K2Node_ComponentBoundEvent_1_OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void ExecuteUbergraph_CACA_CatButtonProps_Drone_Alex(int32 EntryPoint);
}; // Size: 0x290

#endif
