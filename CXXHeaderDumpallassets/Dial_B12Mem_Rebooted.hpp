#ifndef UE4SS_SDK_Dial_B12Mem_Rebooted_HPP
#define UE4SS_SDK_Dial_B12Mem_Rebooted_HPP

class ADial_B12Mem_Rebooted_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look_At_Robot;                                                      // 0x0340 (size: 0x8)
    class ABP_SwitchTrigger_C* SwitchTrigger;                                         // 0x0348 (size: 0x8)
    bool After_Analyse;                                                               // 0x0350 (size: 0x1)

    void OnDialogBegan();
    void OnRequestDialog();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dial_B12Mem_Rebooted(int32 EntryPoint);
}; // Size: 0x351

#endif
