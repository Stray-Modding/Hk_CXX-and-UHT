#ifndef UE4SS_SDK_BP_Sign06_Child_CanBroke_HPP
#define UE4SS_SDK_BP_Sign06_Child_CanBroke_HPP

class ABP_Sign06_Child_CanBroke_C : public ABP_Sign_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0298 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x02A0 (size: 0x8)
    class UCACA_COMP_oulalacavacasser_C* CACA_COMP_oulalacavacasser;                  // 0x02A8 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x02B0 (size: 0x8)
    bool Jumpable?;                                                                   // 0x02B8 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_Sign06_Child_CanBroke_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_BP_Sign06_Child_CanBroke(int32 EntryPoint);
}; // Size: 0x2B9

#endif
